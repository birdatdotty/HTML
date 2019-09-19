#include "SqlCreateTableColumn.h"
#include <QDebug>
SqlCreateTableColumn::SqlCreateTableColumn(QObject *parent)
{}

QString SqlCreateTableColumn::getName()
{ return name; }
void SqlCreateTableColumn::setName(QString newName)
{ name = newName; }

QString SqlCreateTableColumn::getType()
{ return type; }
void SqlCreateTableColumn::setType(QString newType)
{ type = newType; }

QString SqlCreateTableColumn::getDefaultValue()
{ return defaultValue; }
void SqlCreateTableColumn::setDefaultValue(QString newDefaultValue)
{ defaultValue = newDefaultValue; }

QString SqlCreateTableColumn::out()
{
  QString ret = "  `" + name + "` ";
  ret += type + " ";
  if (defaultValue.size() > 0)
    ret += "DEFAULT " + defaultValue;

  ret += ",\n";

  return ret;
}
