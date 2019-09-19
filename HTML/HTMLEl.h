#ifndef EL_H
#define EL_H

#include <QObject>
#include "HTMLBlock.h"

class HTMLEl : public HTMLBlock
{
  Q_OBJECT
  // Зададим параметры доступые из QML
  Q_PROPERTY(QString idName READ getId WRITE setId NOTIFY changed)
  Q_PROPERTY(QString typeName READ getTypeName WRITE setTypeName NOTIFY changed)
  Q_PROPERTY(QString className READ getClass WRITE setClass NOTIFY changed)
  Q_PROPERTY(QString role READ getRole WRITE setRole NOTIFY changed)
  Q_PROPERTY(QString ariaLabelledby READ getAriaLabelledby WRITE setAriaLabelledby NOTIFY changed)
  Q_PROPERTY(QString type READ getType WRITE setType NOTIFY changed)
  Q_PROPERTY(QString text READ getText WRITE setText NOTIFY changed)
  Q_PROPERTY(QString dataTarget READ getDataTarget WRITE setDataTarget NOTIFY changed)
  Q_PROPERTY(QString dataToggle READ getDataToggle WRITE setDataToggle NOTIFY changed)
  Q_PROPERTY(QString ariaControls READ getAriaControls WRITE setAriaControls NOTIFY changed)
  Q_PROPERTY(QString ariaExpanded READ getAriaExpanded WRITE setAriaExpanded NOTIFY changed)
  Q_PROPERTY(QString ariaLabel READ getAriaLabel WRITE setAriaLabel NOTIFY changed)
  Q_PROPERTY(QString dataRide READ getDataRide WRITE setDataRide NOTIFY changed)
  Q_PROPERTY(QString tabindex READ getTabindex WRITE setTabindex NOTIFY changed)
  Q_PROPERTY(QString ariaHidden READ getAriaHidden WRITE setAriaHidden NOTIFY changed)
  Q_PROPERTY(QString dataDismiss READ getDataDismiss WRITE setDataDismiss NOTIFY changed)

  Q_PROPERTY(QString name READ getName WRITE setName)
  Q_PROPERTY(QString dataSpy READ getDataSpy WRITE setDataSpy)
  Q_PROPERTY(QString dataOffset READ getDataOffset WRITE setDataOffset)
  Q_PROPERTY(QString ariaSelected READ getAriaSelected WRITE setAriaSelected)
  Q_PROPERTY(QString ariaOrientation READ getAriaOrientation WRITE setAriaOrientation)
  Q_PROPERTY(QString ariaHaspopup READ getAriaHaspopup WRITE setAriaHaspopup)

  Q_PROPERTY(QString ariaDescribedby READ getAriaDescribedby WRITE setAriaDescribedby)
  Q_PROPERTY(QString ariaDisabled READ getAriaDisabled WRITE setAriaDisabled)
  Q_PROPERTY(QString placeholder READ getPlaceholder WRITE setPlaceholder)
  Q_PROPERTY(QString options READ getOptions WRITE setOptions)
  // Это основные параметры для елементов страницы



  // Основные параметры и финкции для настройки элемента (QML):
  protected:
    QString typeName;
    QString id;
    QString className;
    QString text;
    QString dataTarget;
    QString dataToggle;
    QString ariaControls;
    QString ariaExpanded;
    QString ariaLabel;
    QString ariaLabelledby;
    QString role;
    QString type;
    QString dataRide;
    QString tabindex;
    QString ariaHidden;
    QString dataDismiss;
    QString argFor;
    QString dataSpy;
    QString dataOffset;
    QString ariaSelected;
    QString ariaOrientation;
    QString ariaDescribedby;
    QString ariaHaspopup;
    QString ariaDisabled;
    QString placeholder;
    QString name;
    QString options;

    QMap<QString, QString> optsMap;

    QString virtual getOpts(QString optStr = "");

  public:
    Q_INVOKABLE QString getId();
    Q_INVOKABLE void setId(QString newId);

    Q_INVOKABLE QString getTypeName();
    Q_INVOKABLE void setTypeName(QString newTypeName);

    Q_INVOKABLE QString getClass();
    Q_INVOKABLE void setClass(QString newClassName);

    Q_INVOKABLE QString getText();
    Q_INVOKABLE void setText(QString newText);

    Q_INVOKABLE QString getDataTarget();
    Q_INVOKABLE void setDataTarget(QString newDataTarget);

    Q_INVOKABLE QString getDataToggle();
    Q_INVOKABLE void setDataToggle(QString newdataToggle);

    Q_INVOKABLE QString getAriaLabelledby();
    Q_INVOKABLE void setAriaLabelledby(QString newAriaLabelledby);

    Q_INVOKABLE QString getAriaControls();
    Q_INVOKABLE void setAriaControls(QString newAriaControls);

    Q_INVOKABLE QString getAriaExpanded();
    Q_INVOKABLE void setAriaExpanded(QString newAriaExpanded);

    Q_INVOKABLE QString getAriaLabel();
    Q_INVOKABLE void setAriaLabel(QString newAriaLabel);

    Q_INVOKABLE QString getAriaHaspopup();
    Q_INVOKABLE void setAriaHaspopup(QString newAriaHaspopup);

    Q_INVOKABLE QString getType();
    Q_INVOKABLE void setType(QString newType);

    Q_INVOKABLE QString getRole();
    Q_INVOKABLE void setRole(QString newRole);

    Q_INVOKABLE QString getDataRide();
    Q_INVOKABLE void setDataRide(QString newDataRide);

    Q_INVOKABLE QString getTabindex();
    Q_INVOKABLE void setTabindex(QString newTabindex);

    Q_INVOKABLE QString getAriaHidden();
    Q_INVOKABLE void setAriaHidden(QString newAriaHidden);

    Q_INVOKABLE QString getDataDismiss();
    Q_INVOKABLE void setDataDismiss(QString newDataDismiss);

    Q_INVOKABLE QString getDataSpy();
    Q_INVOKABLE void setDataSpy(QString newDataSpy);

    Q_INVOKABLE QString getDataOffset ();
    Q_INVOKABLE void setDataOffset (QString newDataOffset);

    Q_INVOKABLE QString getAriaSelected ();
    Q_INVOKABLE void setAriaSelected (QString newDataOffset);

    Q_INVOKABLE QString getAriaOrientation ();
    Q_INVOKABLE void setAriaOrientation (QString newAriaOrientation);

    Q_INVOKABLE QString getAriaDescribedby ();
    Q_INVOKABLE void setAriaDescribedby (QString newAriaDescribedby);

    Q_INVOKABLE QString getAriaDisabled();
    Q_INVOKABLE void setAriaDisabled(QString newAriaDisabled);

    Q_INVOKABLE QString getPlaceholder ();
    Q_INVOKABLE void setPlaceholder(QString newPlaceholder);

    Q_INVOKABLE QString getName ();
    Q_INVOKABLE void setName(QString newName);

    Q_INVOKABLE QString getOptions ();
    Q_INVOKABLE void setOptions(QString newOptions);
  //

  public:
    explicit HTMLEl(QObject *parent = Q_NULLPTR);
    QString out();
    QString minOut();
    int tabCount();
    bool closed = true;
//    QString out(QString tab = "");

  signals:
    void changed();

  public slots:

};

#endif // EL_H
