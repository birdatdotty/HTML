#ifndef HTMLA_H
#define HTMLA_H

#include "HTMLEl.h"

class HTMLA : public HTMLEl
{
  Q_OBJECT
  Q_PROPERTY(QString href READ getHref WRITE setHref)
  Q_PROPERTY(QString download READ getDownload WRITE setDownload)

public:
  HTMLA();

  QString getHref();
  Q_INVOKABLE void setHref(QString newHref);

  QString getDownload();
  Q_INVOKABLE void setDownload(QString newDownload);


private:
  QString getAOpts(QString optStr = "");
  QString href;
  QString download;
};

#endif // A_H
