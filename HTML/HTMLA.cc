#include "HTMLA.h"

HTMLA::HTMLA()
{typeName = "a";}

QString HTMLA::getAOpts(QString optStr)
{
  if (href.size() > 0)
    optStr += " href='" + href + "'";
  if (download.size() > 0)
    optStr += " download='" + download + "'";

  return optStr;
}

QString HTMLA::getHref()
{ return href;  }
void HTMLA::setHref(QString newHref)
{ href = newHref; optsMap["A"] = getAOpts(); }

QString HTMLA::getDownload()
{ return download; }

void HTMLA::setDownload(QString newDownload)
{ download = newDownload; optsMap["A"] = getAOpts(); }
