#ifndef PAGE_H
#define PAGE_H

#include "ProjectItem.h"
#include "HTML/HTMLBlock.h"

class Page : public ProjectItem
{
  Q_OBJECT
  Q_PROPERTY(QString file READ getFile
                          WRITE setFile)
  Q_PROPERTY(HTMLBlock* page READ getPage
                          WRITE setPage)

public:
  explicit Page(QObject *parent = nullptr);

  QString getFile();
  void setFile(QString newFile);

  HTMLBlock* getPage();
  void setPage(HTMLBlock* newPage);
  QString out();
  QString minOut();
  void write(QString root, bool min = false);

  private:
    QString file;
    HTMLBlock* ctx;

signals:

public slots:
};

#endif // PAGE_H
