#ifndef CSS_H
#define CSS_H

#include "../Site/ProjectItem.h"
#include "../HTML/HTMLBlock.h"

#include <QQmlListProperty>

class Css : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString file READ getFile WRITE setFile)

  public:
    Css(QObject *parent = nullptr);
    QString getFile();
    void setFile(QString newFile);

    void write(QString, bool = false);

  private:
    QString file;

// Добавим возможность добавления элементов (QML)
    Q_PROPERTY(QQmlListProperty<HTMLBlock> stylesList READ stylesList)
    Q_CLASSINFO("DefaultProperty", "stylesList")

  public:
    QQmlListProperty<HTMLBlock> stylesList();
    Q_INVOKABLE void appendStyle(HTMLBlock*);
    int              stylesCount() const;
    HTMLBlock*       style(int) const;
    void             clearStyles();

  private:
    static void appendStyle(QQmlListProperty<HTMLBlock>*, HTMLBlock*);
    static int stylesCount (QQmlListProperty<HTMLBlock>*);
    static HTMLBlock* style (QQmlListProperty<HTMLBlock>*, int);
    static void clearStyles(QQmlListProperty<HTMLBlock>*);

    QList<HTMLBlock*> styles;

};

#endif // CSS_H
