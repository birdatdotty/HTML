#ifndef SQL_H
#define SQL_H

#include "../Site/ProjectItem.h"
#include "SqlTable.h"

class Sql : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString file READ getFile WRITE setFile)
  Q_PROPERTY(QString login READ getLogin WRITE setLogin)
  Q_PROPERTY(QString password READ getPassword WRITE setPassword)
  Q_PROPERTY(QString db READ getDb WRITE setDb)

  Q_PROPERTY(QString insertSQL READ getInsertSQL WRITE setInsertSQL)

public:
  Sql(QObject *parent = nullptr);

  QString getFile();
  void setFile (QString newFile);

  QString getLogin();
  void setLogin (QString newLogin);

  QString getPassword ();
  void setPassword (QString newPassword);

  QString getDb ();
  void setDb (QString newDb);

  QString getInsertSQL();
  void setInsertSQL(QString newInsertSQL);

  Q_INVOKABLE virtual QString out() {return "SQL.H1";}
  Q_INVOKABLE virtual QString minOut() {return "SQL.H2";}

  virtual void write(QString, bool = false);

private:
  QString file, db, password, login;
  QString insertSQL;

// Добавим возможность добавления элементов (QML)
  Q_PROPERTY(QQmlListProperty<SQLTable> tablesList READ tablesList)
  Q_CLASSINFO("DefaultProperty", "tablesList")

public:
  QQmlListProperty<SQLTable> tablesList();
  Q_INVOKABLE void appendTable(SQLTable*);
  int              tablesCount() const;
  SQLTable *       table(int) const;
  void             clearTables();

private:
  static void appendTable(QQmlListProperty<SQLTable>*, SQLTable*);
  static int tablesCount (QQmlListProperty<SQLTable>*);
  static SQLTable* table (QQmlListProperty<SQLTable>*, int);
  static void clearTables(QQmlListProperty<SQLTable>*);

  QList<SQLTable*> tables;

};

#endif // SQL_H
