#include "SqlCreateTable.h"
#include <QDebug>
QString SqlCreateTable::out()
{
  QString ret = "DROP TABLE IF EXISTS `posts`;\n"
                "CREATE TABLE `posts` (\n"
                "  `id` bigint(20) NOT NULL AUTO_INCREMENT,\n";
                for (SqlCreateTableColumn* column: columns)
                  ret += column->out();

                ret += "  PRIMARY KEY (`id`)\n"
                       ") ENGINE=InnoDB DEFAULT CHARSET=utf8;\n";

  return ret;
}

// Добавим возможность добавления элементов (QML)

QQmlListProperty<SqlCreateTableColumn> SqlCreateTable::columnList()
{
  return QQmlListProperty<SqlCreateTableColumn>(this, this,
           &SqlCreateTable::appendTable,
           &SqlCreateTable::tablesCount,
           &SqlCreateTable::table,
           &SqlCreateTable::clearTables);
}

void SqlCreateTable::appendTable(SqlCreateTableColumn *column)
{
  columns.append(column);
}

int SqlCreateTable::tablesCount() const
{
  return columns.size();
}

SqlCreateTableColumn *SqlCreateTable::table(int i) const
{
  return columns.at(i);
}

void SqlCreateTable::clearTables()
{
  columns.clear();
}

void SqlCreateTable::appendTable(QQmlListProperty<SqlCreateTableColumn> *list, SqlCreateTableColumn *column)
{
  reinterpret_cast< SqlCreateTable* >(list->data)->appendTable(column);
}

int SqlCreateTable::tablesCount(QQmlListProperty<SqlCreateTableColumn> *list)
{
  return reinterpret_cast< SqlCreateTable* >(list->data)->tablesCount();
}

SqlCreateTableColumn *SqlCreateTable::table(QQmlListProperty<SqlCreateTableColumn> *list, int i)
{
  return reinterpret_cast< SqlCreateTable* >(list->data)->table(i);
}

void SqlCreateTable::clearTables(QQmlListProperty<SqlCreateTableColumn> *list)
{
  reinterpret_cast< SqlCreateTable* >(list->data)->clearTables();
}
