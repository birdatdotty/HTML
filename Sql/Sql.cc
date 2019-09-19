#include "Sql.h"

Sql::Sql(QObject */*parent*/)
{}

#include <QDebug>
#include <QFile>
QString Sql::getFile()
{ return file; }
void Sql::setFile (QString newFile)
{ file = newFile; }

QString Sql::getLogin()
{ return login; }
void Sql::setLogin(QString newLogin)
{ login = newLogin; }

QString Sql::getPassword()
{ return password; }
void Sql::setPassword(QString newPassword)
{ password = newPassword; }

QString Sql::getDb()
{ return db; }
void Sql::setDb(QString newDb)
{ db = newDb; }

QString Sql::getInsertSQL()
{ return insertSQL; }

void Sql::setInsertSQL(QString newInsertSQL)
{ insertSQL = newInsertSQL; }

void Sql::write(QString dir, bool)
{
  //  INSERT INTO pxlot (realname,email,address,phone,status,regtime,ip)
//  values ('$realname','$email','$address','$phone','0','$dateTime','$ip')
//  ,('$realname','$email','$address','$phone','0','$dateTime','$ip')
//  ,('$realname','$email','$address','$phone','0','$dateTime','$ip')
  QString ctx;
  for (SQLTable* table: tables)
    {
      ctx += table->getCreate()->out();
      ctx += table->minOut();
    }
  ctx += "\n";

  QFile fd(dir + "/" + file);
  if (fd.open(QIODevice::WriteOnly))
    {
      fd.write(ctx.toUtf8());
    }
  fd.close();
//  /home/gluck/.local/bin/insertsql.sh

  if (insertSQL.size() > 0)
    {
//      QString cmd = insertSQL + " " + dir + "/" + file;
//      system(cmd.toUtf8());
      QString cmd = insertSQL + " " + db + " " + dir + "/" + file;
      system(cmd.toUtf8());
    }
}


// Добавим возможность добавления элементов (QML)
QQmlListProperty<SQLTable> Sql::tablesList()
{
  return QQmlListProperty<SQLTable>(this, this,
           &Sql::appendTable,
           &Sql::tablesCount,
           &Sql::table,
           &Sql::clearTables);

}

void Sql::appendTable(SQLTable *el)
{
  tables.append(el);
}

int Sql::tablesCount() const
{
  return tables.size();
}

SQLTable *Sql::table(int i) const
{
  return tables.at(i);
}

void Sql::clearTables()
{
  tables.clear();
}

void Sql::appendTable(QQmlListProperty<SQLTable> *list, SQLTable *el)
{
  reinterpret_cast< Sql* >(list->data)->appendTable(el);
}

int Sql::tablesCount(QQmlListProperty<SQLTable> *list)
{
  return reinterpret_cast< Sql* >(list->data)->tablesCount();
}

SQLTable *Sql::table(QQmlListProperty<SQLTable> *list, int i)
{
  return reinterpret_cast< Sql* >(list->data)->table(i);
}

void Sql::clearTables(QQmlListProperty<SQLTable> *list)
{
  return reinterpret_cast< Sql* >(list->data)->clearTables();
}
