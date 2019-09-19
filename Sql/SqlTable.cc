#include "SqlTable.h"

SQLTable::SQLTable()
{

}

//HTMLBlock *SQLTable::getCreate()
//{ return create; }
//void SQLTable::setCreate(HTMLBlock *newCreate)
//{ create = newCreate; }
SqlCreateTable *SQLTable::getCreate()
{ return create; }
void SQLTable::setCreate(SqlCreateTable *newSqlCreateTable)
{ create = newSqlCreateTable; }

#include <QDebug>
QString SQLTable::out()
{
//  INSERT INTO pxlot (realname,email,address,phone,status,regtime,ip)
//  values ('$realname','$email','$address','$phone','0','$dateTime','$ip')
//  ,('$realname','$email','$address','$phone','0','$dateTime','$ip')
//  ,('$realname','$email','$address','$phone','0','$dateTime','$ip')
  QString ctx;
  ctx += "DROP TABLE IF EXISTS `" + getTable() + "`;\n";
  ctx += "CREATE TABLE `" + getTable() + "` (\n";
      "  `id` bigint(20) NOT NULL AUTO_INCREMENT,\n" +
      getCreate()->out() +
      "  PRIMARY KEY (`id`)\n" +
      ") ENGINE=InnoDB DEFAULT CHARSET=utf8;\n";



  QString ret = "INSERT INTO posts (page, type, data) VALUES ";
  QStringList rowsValues;

  for (SQLRow* row: rows)
    {
      rowsValues.append(row->out());
    }

  ret += rowsValues.join(",") + ";";
  return ret;
}

QString SQLTable::minOut()
{
  QString ret = "INSERT INTO posts (page, type, data) VALUES ";
  QStringList rowValues;

  for (SQLRow* row: rows)
    {
      rowValues.append("\n"+row->minOut());
    }

  ret += rowValues.join(",") + ";";
  return ret;
}

QQmlListProperty<SQLRow> SQLTable::rowsList()
{
  return QQmlListProperty<SQLRow>(this, this,
           &SQLTable::appendRow,
           &SQLTable::rowsCount,
           &SQLTable::row,
           &SQLTable::clearRows);

}

void SQLTable::appendRow(SQLRow *row)
{
  rows.append(row);
}

int SQLTable::rowsCount() const
{
  return rows.size();
}

SQLRow *SQLTable::row(int i) const
{
  return rows.at(i);
}

void SQLTable::clearRows()
{
  rows.clear();
}

void SQLTable::appendRow(QQmlListProperty<SQLRow> *list, SQLRow *el)
{
  reinterpret_cast< SQLTable* >(list->data)->appendRow(el);
}

int SQLTable::rowsCount(QQmlListProperty<SQLRow> *list)
{
  return reinterpret_cast< SQLTable* >(list->data)->rowsCount();
}

SQLRow *SQLTable::row(QQmlListProperty<SQLRow> *list, int i)
{
  return reinterpret_cast< SQLTable* >(list->data)->row(i);
}

void SQLTable::clearRows(QQmlListProperty<SQLRow> *list)
{
  return reinterpret_cast< SQLTable* >(list->data)->clearRows();
}

