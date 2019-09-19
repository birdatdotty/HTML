#include <QApplication>

#include "Confirm.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QString fn =     qApp->applicationDirPath()+"/../sites/dotty/root.qml";
  QString config = qApp->applicationDirPath()+"/../sites/dotty/Configure.js";

  Confirm *confirm = new Confirm(fn, config);
  confirm->show();

  return app.exec();
}
