#ifndef SqlCreateTable_H
#define SqlCreateTable_H

#include "../Site/ProjectItem.h"
#include "SqlCreateTableColumn.h"

#include <QQmlListProperty>

class SqlCreateTable : public ProjectItem
{
  Q_OBJECT

// Добавим возможность добавления элементов (QML)
  Q_PROPERTY(QQmlListProperty<SqlCreateTableColumn> columnList READ columnList)
  Q_CLASSINFO("DefaultProperty", "columnList")

public:
  QString out();

public:
  QQmlListProperty<SqlCreateTableColumn> columnList();
  Q_INVOKABLE void                       appendTable(SqlCreateTableColumn*);
  int                                    tablesCount() const;
  SqlCreateTableColumn*                  table(int) const;
  void                                   clearTables();

private:
  static void appendTable             (QQmlListProperty<SqlCreateTableColumn>* list, SqlCreateTableColumn* column);
  static int tablesCount              (QQmlListProperty<SqlCreateTableColumn>* list);
  static SqlCreateTableColumn* table  (QQmlListProperty<SqlCreateTableColumn>* list, int i);
  static void clearTables             (QQmlListProperty<SqlCreateTableColumn>* list);

  QList<SqlCreateTableColumn*> columns;

};

#endif // SQL_H
