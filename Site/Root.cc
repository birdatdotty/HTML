#include "Root.h"

#include <QDebug>
#include <QDir>
#include <QFile>

Root::Root()
{

}

QQmlListProperty<ProjectItem> Root::pageList()
{
  return QQmlListProperty<ProjectItem>(this, this,
           &Root::appendPage,
           &Root::pageCount,
           &Root::page,
           &Root::clearPages);
}

void Root::appendPage(ProjectItem *page)
{
  pages.append(page);
}

int Root::pageCount() const
{
  return pages.size();
}

ProjectItem *Root::page(int i) const
{
  return pages.at(i);
}

void Root::clearPages()
{
  pages.clear();
}

void Root::appendPage(QQmlListProperty<ProjectItem> *list, ProjectItem *el)
{
  reinterpret_cast< Root* >(list->data)->appendPage(el);
}

int Root::pageCount(QQmlListProperty<ProjectItem> *list)
{
  return reinterpret_cast< Root* >(list->data)->pageCount();
}

ProjectItem *Root::page(QQmlListProperty<ProjectItem> *list, int i)
{
  return reinterpret_cast< Root* >(list->data)->page(i);
}

void Root::clearPages(QQmlListProperty<ProjectItem> *list)
{
  reinterpret_cast< Root* >(list->data)->clearPages();
}

void Root::write(bool minificate)
{
  for (ProjectItem* prjItem: pages)
    {
      prjItem->write(root, minificate);
    }
}

void Root::write(QString rootPath, bool minificate)
{
  for (ProjectItem* prjItem: pages)
    {
      prjItem->write(rootPath + root, minificate);
    }
}

void Root::writeFile(QString fileName, QString ctx)
{
  QFile file (root + "/" + fileName);
  if ( file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text) )
  {
    QTextStream stream( &file );
    stream << ctx;
    stream.flush();
  }
  else {
    qInfo() << "ERROR in: " << root + "/" + fileName;
  }
  file.close();
}

void Root::setRoot(QString dir)
{
  root = dir;
}

QString Root::getRoot()
{
  return root;
}
