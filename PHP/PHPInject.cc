#include "PHPInject.h"

QString PHPInject::out()
{
  QString optStr;// = HTMLEl::getOpts();

  QStringList ctxList = src.split("\n");
  QString space0 = QString("  ").repeated(parent->tabCount());
  QString space = QString("  ")
                  .repeated(parent->tabCount() + 1);
  QString ctx = space + ctxList.join("\n" + space);

  QString ret =
      space0 +
      "<?php\n" + space + "$tab = \"" + space + "\";\n" +
      ctx + "\n" + space0 + "?>\n";
  return ret;
}

QString PHPInject::minOut()
{
  QString optStr;
  QString ctx = src;

  QString ret =
      "<?php " + ctx + " ?>";

  return ret;
}

QString PHPInject::getSrc()
{
  return src;
}

void PHPInject::setSrc(QString newSrc)
{
  src = newSrc;
  optsMap["Img"] = " src='" + src + "'";
}
