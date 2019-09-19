#ifndef HTMLIMG_H
#define HTMLIMG_H

#include "HTMLEl.h"

class HTMLImg : public HTMLEl
{
  Q_OBJECT
  Q_PROPERTY(QString src READ getSrc WRITE setSrc)
  Q_PROPERTY(QString alt READ getAlt WRITE setAlt)

public:
  HTMLImg() {}
  QString out();// {return QString("  ").repeated(parent->tabCount()) +"<img src='" + src + "'>\n";}
  QString minOut();

  QString getSrc();
  Q_INVOKABLE void setSrc(QString newSrc);// {src = newSrc;}

  QString getAlt();
  Q_INVOKABLE void setAlt(QString newAlt);// {src = newSrc;}


private:
  QString getOpts(QString optStr = "");
  QString src;
  QString alt;
};

#endif // A_H
