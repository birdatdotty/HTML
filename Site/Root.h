#ifndef ROOT_H
#define ROOT_H

#include "Page.h"

#include <QObject>
#include <QQmlListProperty>

#include <QObject>

class Root : public ProjectItem//: public QObject
{
  Q_OBJECT
  // Добавим возможность добавления элементов (QML)
  Q_PROPERTY(QQmlListProperty<ProjectItem> pageList READ pageList)
  Q_PROPERTY(QString root READ getRoot WRITE setRoot)
  Q_CLASSINFO("DefaultProperty", "pageList")

  public:
    Root();
    QQmlListProperty<ProjectItem> pageList();
    void appendPage(ProjectItem*);
    int pageCount() const;
    ProjectItem *page(int) const;
    void clearPages();

  private:
    static void appendPage(QQmlListProperty<ProjectItem>*, ProjectItem*);
    static int pageCount(QQmlListProperty<ProjectItem>*);
    static ProjectItem* page(QQmlListProperty<ProjectItem>*, int);
    static void clearPages(QQmlListProperty<ProjectItem>*);

    QList<ProjectItem*> pages;
    QString root;

  // blocksList будет функцией по умолчанию

  public:
    void write(bool minificate = false);
    void write(QString rootPath, bool minificate = false);
    void writeFile(QString file, QString ctx);
    void setRoot(QString dir);
    QString getRoot();
};

#endif // ROOT_H
