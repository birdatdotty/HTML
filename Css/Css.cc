#include "Css.h"

#include <QDir>
#include <QFile>

Css::Css(QObject *parent)
{

}

QString Css::getFile()
{ return file; }
void Css::setFile(QString newFile)
{ file = newFile; }

void Css::write(QString dir, bool min)
{
  QString ctx;
  for (HTMLBlock* block: styles)
    ctx += block->getCss(min);

  QString p1 = dir + "/" + file;
  QStringList p1List = p1.split("/");
  p1List.pop_back();
  QString path = p1List.join("/");

  QDir cssDir(path);
  if (!cssDir.mkpath(path))
    return;

//  QDir::mkpath(path);
  QFile fd(dir + "/" + file);
  if (fd.open(QIODevice::WriteOnly))
    {
      fd.write(ctx.toUtf8());
    }
}

QQmlListProperty<HTMLBlock> Css::stylesList()
{
  return QQmlListProperty<HTMLBlock>(this, this,
           &Css::appendStyle,
           &Css::stylesCount,
           &Css::style,
           &Css::clearStyles);

}

void Css::appendStyle(HTMLBlock *el)
{
  styles.append(el);
}

int Css::stylesCount() const
{
  return styles.size();
}

HTMLBlock *Css::style(int i) const
{
  return styles.at(i);
}

void Css::clearStyles()
{
  styles.clear();
}

void Css::appendStyle(QQmlListProperty<HTMLBlock> *list, HTMLBlock *el)
{
  reinterpret_cast< Css* >(list->data)->appendStyle(el);
}

int Css::stylesCount(QQmlListProperty<HTMLBlock> *list)
{
  return reinterpret_cast< Css* >(list->data)->stylesCount();
}

HTMLBlock *Css::style(QQmlListProperty<HTMLBlock> *list, int i)
{
  return reinterpret_cast< Css* >(list->data)->style(i);
}

void Css::clearStyles(QQmlListProperty<HTMLBlock> *list)
{
  reinterpret_cast< Css* >(list->data)->clearStyles();
}
