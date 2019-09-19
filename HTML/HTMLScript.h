#ifndef HTMLScript_H
#define HTMLScript_H

#include "HTMLEl.h"

class HTMLScript : public HTMLEl
{
  Q_OBJECT
  QString getHref();
  Q_PROPERTY(QString body READ getBody WRITE setBody)

public:
  HTMLScript() {typeName = "script";}

  Q_INVOKABLE void setBody(QString newBody) {body = newBody;}
  Q_INVOKABLE QString getBody() {return body;}

  QString out() {
    int calculateCount = parent ? parent->tabCount() : 0;
    if (body.size() > 0)
      return QString("  ").repeated(calculateCount) + "<script>" + body + "</script>\n";
    else
      return "";
  }
  QString minOut() {
    if (body.size() > 0)
      return "<script>" + body + "</script>";
    else
      return "";
  }

private:
  QString body;

};

#endif // HTMLTextArea_H
