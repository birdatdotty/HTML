#ifndef JS_H
#define JS_H

#include "../HTML/HTMLBlock.h"

class Js : public HTMLBlock
{
  Q_OBJECT
  Q_PROPERTY(QString name READ getName WRITE setName)
  Q_PROPERTY(QString args READ getArgs WRITE setArgs)
  Q_PROPERTY(QString body READ getBody WRITE setBody)
  Q_PROPERTY(HTMLBlock* fromBlock READ getFromBlock WRITE setFromBlock)

public:
  Js();

  QString getName();
  void setName(QString newBody);

  QString getBody();
  void setBody(QString newBody);

  QString getArgs();
  void setArgs(QString newArgs);

  HTMLBlock* getFromBlock();
  void setFromBlock(HTMLBlock* newBlock);


  QString out();
  QString minOut();

private:
  QString name;
  QString args;
  QString body;
  HTMLBlock* block;
};

#endif // JS_H
