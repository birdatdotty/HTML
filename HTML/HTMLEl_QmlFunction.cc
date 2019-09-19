#include "HTMLEl.h"


QString HTMLEl::getId()
{ return id; }
void HTMLEl::setId(QString newId)
{ id = newId; optsMap["El"] = getOpts(); }

QString HTMLEl::getTypeName()
{ return typeName; }
void HTMLEl::setTypeName(QString newTypeName)
{ typeName = newTypeName; optsMap["El"] = getOpts(); }

QString HTMLEl::getClass()
{ return className; }
void HTMLEl::setClass(QString newClassName)
{ className = newClassName; optsMap["El"] = getOpts(); }

QString HTMLEl::getText()
{ return text; }
void HTMLEl::setText(QString newText)
{ text = newText; optsMap["El"] = getOpts(); }

QString HTMLEl::getDataTarget()
{ return dataTarget; }
void HTMLEl::setDataTarget(QString newDataTarget)
{ dataTarget = newDataTarget; optsMap["El"] = getOpts(); }

QString HTMLEl::getDataToggle()
{ return dataToggle; }
void HTMLEl::setDataToggle(QString newdataToggle)
{ dataToggle = newdataToggle; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaLabelledby()
{ return  ariaLabelledby; }
void HTMLEl::setAriaLabelledby(QString newAriaLabelledby)
{ ariaLabelledby = newAriaLabelledby; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaControls()
{ return ariaControls; }
void HTMLEl::setAriaControls(QString newAriaControls)
{ ariaControls = newAriaControls; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaExpanded()
{ return ariaExpanded; }
void HTMLEl::setAriaExpanded(QString newAriaExpanded)
{ ariaExpanded = newAriaExpanded; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaLabel()
{ return ariaLabel; }
void HTMLEl::setAriaLabel(QString newAriaLabel)
{ ariaLabel = newAriaLabel; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaHaspopup()
{ return ariaHaspopup;}
void HTMLEl::setAriaHaspopup(QString newAriaHaspopup)
{ ariaHaspopup = newAriaHaspopup; optsMap["El"] = getOpts(); }

QString HTMLEl::getType()
{ return type; }
void HTMLEl::setType(QString newType)
{ type = newType; optsMap["El"] = getOpts(); }

QString HTMLEl::getRole()
{ return role; }
void HTMLEl::setRole(QString newRole)
{ role = newRole; optsMap["El"] = getOpts(); }

QString HTMLEl::getDataRide()
{ return dataRide; }
void HTMLEl::setDataRide(QString newDataRide)
{ dataRide = newDataRide; optsMap["El"] = getOpts(); }

QString HTMLEl::getTabindex()
{ return tabindex; }
void HTMLEl::setTabindex(QString newTabindex)
{ tabindex = newTabindex; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaHidden()
{ return ariaHidden; }
void HTMLEl::setAriaHidden(QString newAriaHidden)
{ ariaHidden = newAriaHidden; optsMap["El"] = getOpts(); }

QString HTMLEl::getDataDismiss()
{ return dataDismiss; }
void HTMLEl::setDataDismiss(QString newDataDismiss)
{ dataDismiss = newDataDismiss; optsMap["El"] = getOpts(); }

QString HTMLEl::getDataSpy()
{ return dataSpy; }
void HTMLEl::setDataSpy(QString newDataSpy)
{ dataSpy = newDataSpy; optsMap["El"] = getOpts(); }

QString HTMLEl::getDataOffset()
{ return dataOffset; }
void HTMLEl::setDataOffset(QString newDataOffset)
{ dataOffset = newDataOffset; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaSelected()
{ return ariaSelected; }
void HTMLEl::setAriaSelected(QString newAriaSelected)
{ ariaSelected = newAriaSelected; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaOrientation()
{ return ariaOrientation; }
void HTMLEl::setAriaOrientation(QString newAriaOrientation)
{ ariaOrientation = newAriaOrientation; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaDescribedby()
{ return ariaDescribedby; }
void HTMLEl::setAriaDescribedby(QString newAriaDescribedby)
{ ariaDescribedby = newAriaDescribedby; optsMap["El"] = getOpts(); }

QString HTMLEl::getAriaDisabled()
{ return ariaDisabled; }
void HTMLEl::setAriaDisabled(QString newAriaDisabled)
{ ariaDisabled = newAriaDisabled; }

#include <QDebug>
QString HTMLEl::getPlaceholder()
{
  return placeholder;
}
void HTMLEl::setPlaceholder(QString newPlaceholder)
{
  placeholder = newPlaceholder;
  optsMap["El"] = getOpts();
}
QString HTMLEl::getName()
{ return name; }
void HTMLEl::setName(QString newName)
{
  name = newName;
  optsMap["El"] = getOpts();
}

QString HTMLEl::getOptions()
{ return options; }
void HTMLEl::setOptions(QString newOptions)
{ options = newOptions; optsMap["El"] = getOpts(); }
