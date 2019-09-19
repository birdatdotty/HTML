#ifndef DIV_H
#define DIV_H

#include "HTMLEl.h"

class HTMLInput : public HTMLEl
{
  Q_OBJECT

public:
  HTMLInput() {
    typeName = "input";
    closed = false;
    tab = 2;
  }
};

#endif // DIV_H
