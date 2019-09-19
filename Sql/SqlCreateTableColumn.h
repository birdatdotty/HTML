#ifndef SqlCreateTableColumn_H
#define SqlCreateTableColumn_H

#include "../Site/ProjectItem.h"

class SqlCreateTableColumn : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString name READ getName WRITE setName)
  Q_PROPERTY(QString type READ getType WRITE setType)
  Q_PROPERTY(QString defaultValue READ getDefaultValue WRITE setDefaultValue)
public:
  SqlCreateTableColumn(QObject *parent = nullptr);

  QString getName();
  void setName(QString newName);

  QString getType();
  void setType (QString newType);

  QString getDefaultValue();
  void setDefaultValue (QString newDefaultValue);

  Q_INVOKABLE virtual QString out();

private:
  QString name, type, defaultValue;
};

#endif // SqlCreateTableColumn_H
