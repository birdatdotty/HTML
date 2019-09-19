#include "HTMLEl.h"

HTMLEl::HTMLEl(QObject */*parent*/)
{
  tab = 2;
}

QString HTMLEl::out()
{
  QString blocksStr;
  QString optStr;
  for (QString key: optsMap.keys())
    optStr += optsMap[key];

  for (HTMLBlock* i: children) {
      blocksStr += i->out();
  }

  int calculateCount = parent ? parent->tabCount() : 0;
  QString ret;
  if (children.size() > 0)
    ret = QString("  ").repeated(calculateCount) + "<" + typeName + optStr + ">\n" +
          blocksStr +
          QString("  ").repeated(calculateCount) + "</" + typeName + ">\n";
  else
    ret = QString("  ").repeated(calculateCount) +
          "<" + typeName + optStr + ">" +
          text + "</" + typeName + ">\n";

  return  ret;
}

QString HTMLEl::minOut()
{
  QString ret;
  QString blocksStr;
  QString optStr;
  for (QString key: optsMap.keys())
    optStr += optsMap[key];

  if (closed)
    {
      for (HTMLBlock* i: children) {
          blocksStr += i->minOut();
        }

      if (children.size() > 0)
        ret = "<" + typeName + optStr + ">" +
            blocksStr +
            "</" + typeName + ">";
      else
        ret = "<" + typeName + optStr + ">" +
            text + "</" + typeName + ">";
    }
  else
    {
      ret = "<" + typeName + optStr + ">";
    }

  return  ret;
}

int HTMLEl::tabCount()
{
  if (parent == nullptr)
    return tab;
  else
    return tab + parent->tabCount();

}
#include <QDebug>
QString HTMLEl::getOpts(QString optStr)
{
  if (id.size() > 0)
    optStr += " id='" + id + "'";
  if (className.size() > 0)
    optStr += " class='" + className + "'";
  if (dataTarget.size() > 0)
    optStr += " data-target='" + dataTarget + "'";
  if (dataToggle.size() > 0)
    optStr += " data-toggle='" + dataToggle + "'";
  if (ariaControls.size() > 0)
    optStr += " aria-controls='" + ariaControls + "'";
  if (ariaExpanded.size() > 0)
    optStr += " aria-expanded='" + ariaExpanded + "'";
  if (ariaLabel.size() > 0)
    optStr += " aria-label='" + ariaLabel + "'";
  if (ariaLabelledby.size() > 0)
      optStr += " aria-labelledby='" + ariaLabelledby + "'";
  if (role.size() > 0)
      optStr += " role='" + role + "'";
  if (type.size() > 0)
      optStr += " type='" + type + "'";
  if (dataRide.size() > 0)
    optStr += " data-ride='" + dataRide + "'";
  if (tabindex.size() > 0)
      optStr += " tabindex='" + tabindex + "'";
  if (ariaHidden.size() > 0)
    optStr += " aria-hidden='" + ariaHidden + "'";
  if (dataDismiss.size() > 0)
      optStr += " data-dismiss='" + dataDismiss + "'";
  if (dataSpy.size() > 0)
    optStr += " data-spy='" + dataSpy + "'";
  if (dataOffset.size() > 0)
    optStr += " data-offset='" + dataOffset + "'";
  if (ariaSelected.size() > 0)
    optStr += " aria-selected='" + ariaSelected + "'";
  if (ariaOrientation.size() > 0)
    optStr += " aria-orientation='" + ariaOrientation + "'";
  if (ariaDescribedby.size() > 0)
    optStr += " aria-describedby='" + ariaDescribedby + "'";
  if (placeholder.size() > 0)
    optStr += " placeholder='" + placeholder + "'";
  if (name.size() > 0)
    optStr += " name='" + name + "'";
  if (ariaHaspopup.size() > 0)
    optStr += " aria-haspopup='" + ariaHaspopup + "'";
  if (options.size() > 0)
    optStr += " " + options;
  if (ariaDisabled.size() > 0)
    optStr += "aria-disabled='" + ariaDisabled + "'";

  return optStr;
}

