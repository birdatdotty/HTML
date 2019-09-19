#include "HTMLImg.h"

QString HTMLImg::out()
{
  QString optStr;// = HTMLEl::getOpts();
  for (QString key: optsMap.keys())
    optStr += optsMap[key];

  QString ret = QString("  ").repeated(parent->tabCount())
      +"<img " + optStr + ">\n";

  return ret;
}

QString HTMLImg::minOut()
{
  QString optStr;
  for (QString key: optsMap.keys())
    optStr += optsMap[key];

  QString ret = "<img " + optStr + ">";
  return ret;
}

QString HTMLImg::getSrc()
{
  return src;
}

void HTMLImg::setSrc(QString newSrc)
{
  src = newSrc;
  optsMap["Img"] = HTMLImg::getOpts();//" src='" + src + "'";
}

QString HTMLImg::getAlt()
{
  return alt;
}

void HTMLImg::setAlt(QString newAlt)
{
  alt = newAlt;
}

QString HTMLImg::getOpts(QString optStr)
{
  if (src.size() > 0)
    optStr += " src='" + src + "'";

  optStr += " alt='" + alt + "'";

  return optStr;
}
