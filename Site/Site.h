#ifndef SITE_H
#define SITE_H

#include <QObject>
#include <QSet>
#include "Page.h"

class Site : public QObject
{
  Q_OBJECT
public:
  explicit Site(QObject *parent = nullptr);
  Q_INVOKABLE void setStyleFile(QString fileName);
  Q_INVOKABLE QString getStyleFile();
  Q_INVOKABLE void addStyleRule(QString style);
  Q_INVOKABLE QString getHtmlStyle();

  Q_INVOKABLE void setRoot(QString dirName);
  Q_INVOKABLE QString getRoot();

  Q_INVOKABLE void setBackend(QString dirName);
  Q_INVOKABLE QString getBackend();

  Q_INVOKABLE void setMinificate(bool newMinificate);
  Q_INVOKABLE bool getMinificate();

  Q_INVOKABLE void setDir(QString newDir);
  Q_INVOKABLE QString getDir();
  Q_INVOKABLE void setDb(QString newDb);
  Q_INVOKABLE QString getDb();

  Q_INVOKABLE QString getStyleBlock();
  Q_INVOKABLE QString fish(int linesCount = 1);
  Q_INVOKABLE QString escapeStr(QString = "");

private:
  QString styleFile;
  QString root;
  QString backend;
  QString dir;
  QString db;
  bool minificate;
  QSet<QString> styleRules;
signals:

public slots:
};

#endif // SITE_H
