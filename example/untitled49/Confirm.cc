#include "Confirm.h"
#include <QQmlEngine>
#include <QQmlComponent>

#include <QFile>
#include <QDir>

#include <QObject>
#include <QMessageBox>


#include <QApplication>
#include <QDebug>

#include <Site/registerType.h>


QString openJs(QString config)
{
  QString ret;
  QFile jsFile(config);
  qInfo() << config;
  if (jsFile.open(QIODevice::ReadOnly))
    ret = jsFile.readAll();

  return ret;
}


Confirm::Confirm(QString fn, QString config, QWidget *parent)
  : QWidget(parent),
    button(new QPushButton("Записать",this))
{
  buildQml(fn,config);
  layout.addWidget(button);
  connect(button,&QPushButton::released,
          this, &Confirm::write);
  setLayout(&layout);
}

int Confirm::buildQml(QString fn, QString config)
{
  REGISTRYTYPE

  site = new Site();
  // fix for public:
  site->setDir(qApp->applicationDirPath() + "/../sites/dotty_dirs/");

  QJSEngine jsEngine;
//  QJSValue evaluationResult =
      jsEngine.evaluate(openJs(config));
  const QJSValue jsSite = jsEngine.newQObject(site);
  jsEngine.globalObject().setProperty("site", jsSite);

  QJSValue setSite = jsEngine.globalObject().property("setSite");
  QJSValue callResult = setSite.call();
  if (callResult.isError()) {
      qWarning() << "Error calling 'setSite' function:" << callResult.toString();
      return 1;
  }
  if (!jsEngine.globalObject().hasProperty("setSite")) {
      qWarning() << "Script has no 'setSite' function";
      return 2;
  }

  if (!jsEngine.globalObject().property("setSite").isCallable()) {
      qWarning() << "'setSite' property of script is not callable";
      return 3;
  }


  QQmlEngine engine;
  const QJSValue qJSValueSite = engine.newQObject(site);
  engine.globalObject().setProperty("site", qJSValueSite);

  // Write tamplates of pages
  QQmlComponent component(&engine, QUrl(fn), QQmlComponent::PreferSynchronous);
  QObject *componentRoot = component.create();
  root = qobject_cast<Root*>(componentRoot);

  if(!component.isReady()){
      qWarning("qPrintable: %s", qPrintable(component.errorString()));
  }

    // Write css js files
    QString cssFile = site->getStyleFile();
    QString cssCtx = site->getStyleBlock();

    return 0;
}

void Confirm::write()
{
  root->write(site->getMinificate());
  QApplication::quit();
}
