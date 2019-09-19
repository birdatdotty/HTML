#ifndef HTMLVideo_H
#define HTMLVideo_H

#include "HTMLEl.h"

class HTMLVideo : public HTMLEl
{
  Q_OBJECT
  Q_PROPERTY(QString controls READ getControls WRITE setControls)
  Q_PROPERTY(QString src READ getSrc WRITE setSrc)
public:
  HTMLVideo() {controls = "controls";}

  QString getControls()
  { return controls; }
  void setControls(QString newControls = "")
  { controls = newControls; }

  QString getSrc()
  { return src; }
  void setSrc(QString newSrc)
  { src = newSrc; }

  QString out()
  {
    QString ret;
    ret += "<video controls='" + controls + "'>\n";
    ret += "  <source src='" + src + "'>\n";
    ret += "</video>\n";

    return ret;
  }

  QString minOut()
  {
    QString ret;
    ret += "<video controls='" + controls + "'>";
    ret += "  <source src='" + src + "'>";
    ret += "</video>";

    return ret;
  }

private:
  QString controls;
  QString src;
};

#endif // HTMLLABEL_H
