#ifndef HTMLHeader_H
#define HTMLHeader_H

#include "HTMLBlock.h"
#include "HTMLDiv.h"

class HTMLHeader : public HTMLDiv
{
  Q_OBJECT

public:
  HTMLHeader() {
    typeName = "header";
    tab = 2;
  }
};

#endif // NAV_H
