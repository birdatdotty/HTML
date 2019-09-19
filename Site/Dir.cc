#include "Dir.h"

Dir::Dir(QObject *parent)
  : ProjectItem (parent)
{}

void Dir::setDir(QString newDir)
{ dir = newDir; }
QString Dir::getDir()
{ return dir; }

void Dir::setFrom(QString newFrom)
{ from = newFrom; }
QString Dir::getFrom()
{ return from; }

void Dir::write(QString rootPath, bool) {
  QString to = rootPath + "/" + dir;
  std::filesystem::copy(from.toStdString(),
                        to.toStdString(),
                        std::filesystem::copy_options::recursive
                        |std::filesystem::copy_options::overwrite_existing);
}
