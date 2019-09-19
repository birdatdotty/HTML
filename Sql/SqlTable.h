#ifndef SQLTABLE_H
#define SQLTABLE_H

#include "../Site/ProjectItem.h"
#include "../HTML/HTMLBlock.h"

#include "SqlRow.h"
#include "SqlCreateTable.h"

class SQLTable : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString table READ getTable WRITE setTable)
//  Q_PROPERTY(HTMLBlock* create READ getCreate WRITE setCreate)
  Q_PROPERTY(SqlCreateTable* create READ getCreate WRITE setCreate)
//  Q_PROPERTY(SqlRow* row READ getRow WRITE setRow)

public:
  SQLTable();

  QString getTable ()
  {return table;}
  void setTable (QString newTable)
  { table = newTable; }

//  HTMLBlock* getCreate();
//  void setCreate(HTMLBlock* newCreate);
  SqlCreateTable* getCreate();
  void setCreate(SqlCreateTable* newCreate);


  QString out();
  QString minOut();

//  SQLRow* getBlock ()
//  { return row; }
//  void setBlock(SQLRow *newRow)
//  { row = newRow; }


private:
  QString table;
//  HTMLBlock* create;
  SqlCreateTable* create;
//  SQLRow *rows;

// Добавим возможность добавления элементов (QML)
//public:
  Q_PROPERTY(QQmlListProperty<SQLRow> rowsList READ rowsList)
  Q_CLASSINFO("DefaultProperty", "rowsList")

  public:
    QQmlListProperty<SQLRow> rowsList();
    Q_INVOKABLE void appendRow(SQLRow* row);
    int              rowsCount() const;
    SQLRow*          row(int i) const;
    void             clearRows();

  private:
    static void appendRow(QQmlListProperty<SQLRow>* list, SQLRow* el);
    static int rowsCount (QQmlListProperty<SQLRow>* list);
    static SQLRow* row   (QQmlListProperty<SQLRow>* list, int i);
    static void clearRows(QQmlListProperty<SQLRow>* list);

    QList<SQLRow*> rows;

};

#endif // SQLTABLE_H
