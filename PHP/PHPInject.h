#ifndef PHPInject_H
#define PHPInject_H

#include "../HTML/HTMLEl.h"

class PHPInject : public HTMLEl
{
  Q_OBJECT
  Q_PROPERTY(QString src READ getSrc WRITE setSrc)

public:
  PHPInject() {}
  QString out();// {return QString("  ").repeated(parent->tabCount()) +"<img src='" + src + "'>\n";}
  QString minOut();

  QString getSrc();
  Q_INVOKABLE void setSrc(QString newSrc);// {src = newSrc;}


private:
//  QString getOpts();
  QString src;
};

#endif // PHPInject_H
