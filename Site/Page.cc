#include "Page.h"

#include <QDir>
#include <QTextStream>
#include <QDebug>

Page::Page(QObject *parent) : ProjectItem(parent)
{

}

QString Page::getFile()
{
  return file;
}

void Page::setFile(QString newFile)
{
  file = newFile;
}

HTMLBlock *Page::getPage()
{
  return ctx;
}

void Page::setPage(HTMLBlock *newPage)
{
  ctx = newPage;
}

QString Page::out()
{
  return ctx->out();
}

QString Page::minOut()
{
  return ctx->minOut();
}

void Page::write(QString root, bool min)
{
  QString fileName = root + "/" + getFile();

  QStringList dirs = fileName.split("/");
  dirs.pop_back();
  const QString dir = dirs.join("/");

  QDir path(dir);
  if (!path.mkpath(dir))
    return;

  QFile file (fileName);
  if ( file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text) )
  {
    QTextStream stream( &file );
    if (min)
      stream << minOut();
    else
      stream << out();
  }
  else {
    qInfo() << "ERROR in file: " << fileName;
  }
  file.close();
}
