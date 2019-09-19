#ifndef COMFIRM_H
#define COMFIRM_H

#include <QMessageBox>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include "Site/Root.h"
#include "Site/Site.h"


class Confirm : public QWidget
{
  Q_OBJECT
public:
  explicit Confirm(QString fn, QString config, QWidget *parent = nullptr);
  int buildQml(QString fn, QString config);

signals:

public slots:
  void write();

private:
  QGridLayout layout;
  Root* root;
  Site* site;

  QPushButton *button;
};

#endif // COMFIRM_H
