#ifndef HTMLUL_H
#define HTMLUL_H

#include "HTMLEl.h"

class HTMLUl : public HTMLEl
{
  Q_OBJECT

  public:
    HTMLUl() {typeName = "ul";}
};

class HTMLLi : public HTMLEl
{
  Q_OBJECT

  public:
    HTMLLi() {typeName = "li";}
};

#endif // HTMLUL_H
