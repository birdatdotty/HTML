#ifndef SQLROW_H
#define SQLROW_H

#include "../Site/ProjectItem.h"
#include "../HTML/HTMLBlock.h"

class SQLRow : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString type READ getType WRITE setType)
  Q_PROPERTY(QString page READ getPage WRITE setPage)
  Q_PROPERTY(HTMLBlock* block READ getBlock WRITE setBlock)

public:
  SQLRow();
  QString out();
  QString minOut();

  QString getType()
  { return type; }
  void setType( QString newType)
  { type = newType; }

  QString getPage()
  { return page; }
  void setPage( QString newPage)
  { page = newPage; }

  HTMLBlock* getBlock()
  { return block; }
  void setBlock( HTMLBlock* newBlock )
  { block = newBlock; }

private:
  QString type;
  QString page;
  HTMLBlock* block;
};

#endif // SQLROW_H
