#ifndef BUTTON_H
#define BUTTON_H

#include "HTMLEl.h"

class HTMLButton : public HTMLEl
{
  Q_OBJECT
  Q_PROPERTY(QString onclick READ getOnClick WRITE setOnClick)

public:
  HTMLButton();

  QString getOnClick() {return onClick;}
  Q_INVOKABLE void setOnClick(QString newOnClick) {onClick = newOnClick; optsMap["Button"] = getButtonOpts();}


private:
  QString getButtonOpts(QString optStr = "") {
    if (onClick.size() > 0)
      optStr += " onclick='" + onClick + "'";

    return optStr;
  }
  QString onClick;
};

#endif // BUTTON_H
