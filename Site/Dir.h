#ifndef DIR_H
#define DIR_H

#include "ProjectItem.h"
#include <QDebug>
#include <filesystem>
class Dir : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString dir READ getDir WRITE setDir)
  Q_PROPERTY(QString from READ getFrom WRITE setFrom )

public:
  Dir(QObject *parent = nullptr);

  void setDir(QString newDir);
  QString getDir();

  void setFrom(QString newFrom);
  QString getFrom();

  void write(QString rootPath, bool minificate = false);

private:
  QString dir;
  QString from;

};

#endif // DIR_H
