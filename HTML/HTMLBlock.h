#ifndef HTMLBLOCK_H
#define HTMLBLOCK_H

#include <QObject>
#include <QQmlListProperty>

class Js;

class HTMLBlock : public QObject
{
  Q_OBJECT
  Q_PROPERTY(QString text READ getText
                          WRITE setText
                          NOTIFY textChanged)
  Q_PROPERTY(int tab READ getTab
                     WRITE setTab)
  Q_PROPERTY(QString css READ getCss
                         WRITE setCss)
  Q_PROPERTY(Js* js READ getJs
                         WRITE setJs)


  // Добавим возможность добавления элементов (QML)
  Q_PROPERTY(QQmlListProperty<HTMLBlock> blocksList READ blocksList)
  Q_CLASSINFO("DefaultProperty", "blocksList")

  public:
    QQmlListProperty<HTMLBlock> blocksList();
    Q_INVOKABLE void appendBlock(HTMLBlock*);
    int blocksCount() const;
    HTMLBlock *block(int) const;
    void clearBlocks();
    virtual int tabCount();
    QString getCss(bool minificate = false);
    void setCss(QString newCss);

  private:
    static void appendBlock(QQmlListProperty<HTMLBlock>*, HTMLBlock*);
    static int blockCount(QQmlListProperty<HTMLBlock>*);
    static HTMLBlock* block(QQmlListProperty<HTMLBlock>*, int);
    static void clearBlocks(QQmlListProperty<HTMLBlock>*);

  protected:
    QList<HTMLBlock*> children;
  // blocksList будет функцией по умолчанию

  public:
    HTMLBlock();
    Q_INVOKABLE HTMLBlock(QString str);
    Q_INVOKABLE virtual QString out();
    Q_INVOKABLE virtual QString minOut();
    Q_INVOKABLE void insert(HTMLBlock* block);

    QString getText();
    void setText(QString text);

    int getTab() {return tab;}
    void setTab(int newTab) {tab = newTab;}

    Js *getJs();
    void setJs(Js *newJs);

  protected:
    Q_INVOKABLE QList<HTMLBlock*> blocks;
    int tab = 0;
    HTMLBlock *parent = nullptr;

  private:
    QString text;
    QString css;
    Js* js;

  signals:
    void textChanged();



  public:
    HTMLBlock *data(){return this;}

};




#endif // BLOCK_H
