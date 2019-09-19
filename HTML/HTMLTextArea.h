#ifndef HTMLTextArea_H
#define HTMLTextArea_H

#include "HTMLEl.h"

class HTMLTextArea : public HTMLEl
{
  Q_OBJECT

public:
  HTMLTextArea() {typeName = "textarea";}
};

#endif // HTMLTextArea_H
