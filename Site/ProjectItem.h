#ifndef PRJECTITEM_H
#define PRJECTITEM_H

#include <QObject>

class ProjectItem: public QObject
{
  Q_OBJECT
  public:
    ProjectItem(QObject *parent = nullptr): QObject(parent){}
    virtual void write(QString, bool = false){ }
    virtual QString out() {return "NOT ";}
    virtual QString minOut() {return "NOT ";}
};

#endif // PRJECTITEM_H
