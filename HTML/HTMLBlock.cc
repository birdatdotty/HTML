#include "HTMLBlock.h"

HTMLBlock::HTMLBlock()
{
  tab = 0;
}

HTMLBlock::HTMLBlock(QString str)
{
  text = str;
}
#include <QDebug>
QString HTMLBlock::out()
{
  int calculateCount = parent ? parent->tabCount() : 0;
  if (text.size() > 0)
    {
      QString ret = QString("  ").repeated(calculateCount) +
                    text.split("\n")
                    .join("\n" + QString("  ")
                    .repeated(calculateCount));

      QStringList test = ret.split("\n");
      if (test.last().simplified().size() == 0)
        {
          test.last() = "";
          ret = test.join("\n");
          return ret;
        }

      return ret + "\n";
    }
  QString ret;
  for (HTMLBlock *block: children)
    ret += block->out();

  return ret;
}

QString HTMLBlock::minOut()
{
  if (text.size() > 0)
    {
      QString ret = text;

      return ret;
    }
  QString ret;
  for (HTMLBlock *block: children)
    ret += block->minOut();

  return ret;
}

int HTMLBlock::tabCount()
{
  if (parent == nullptr)
    return 0;
  else
    return parent->tabCount();
}

QString cssClassFormat(QString cssClass, bool minificate)
{
  cssClass = cssClass.replace("\n", " ");
  QString retList;
  QStringList classes = cssClass.split(",");
  for (QString itr: classes)
    retList.append(itr.replace(QRegExp(" +"), " "));
  qInfo() << retList;

  return "";
}

void splitClassOpts(QString line, bool minificate)
{
  QStringList classOpts = line.split("{");
  if (classOpts.size() == 2)
    {
      QString cssClass = classOpts[0];
      QString cssOpts = classOpts[1];

      cssClassFormat(cssClass, minificate);
    }


}

QString HTMLBlock::getCss(bool minificate)
{
//  if (minificate)
//    {
//      QStringList cssList = css.split("}");
//      for (QString line: cssList)
//        splitClassOpts(line, minificate);
//    }
  return css;
}

void HTMLBlock::setCss(QString newCss)
{
  css = newCss;
}

void HTMLBlock::insert(HTMLBlock *block)
{
  blocks.append(block);
}

QString HTMLBlock::getText()
{
  return text;
}

void HTMLBlock::setText(QString newText)
{
  for (HTMLBlock *block: blocks)
    delete block;

  text = newText;
}

Js *HTMLBlock::getJs()
{
  return js;
}

void HTMLBlock::setJs(Js *newJs)
{
  js = newJs;
}
