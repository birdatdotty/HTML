#ifndef REGISTERTYPE_H
#define REGISTERTYPE_H

#include "Root.h"
#include "Page.h"
#include "Dir.h"

#include "../HTML/HTMLA.h"
#include "../HTML/HTMLBlock.h"
#include "../HTML/HTMLButton.h"
#include "../HTML/HTMLDiv.h"
#include "../HTML/HTMLEl.h"
#include "../HTML/HTMLLabel.h"
#include "../HTML/HTMLInput.h"
#include "../HTML/HTMLNav.h"
#include "../HTML/HTMLH.h"
#include "../HTML/HTMLP.h"

#include "../HTML/HTMLImg.h"
#include "../HTML/HTMLTitle.h"
#include "../HTML/HTMLStyle.h"
#include "../HTML/HTMLUl.h"
#include "../HTML/HTMLScript.h"
#include "../HTML/HTMLTextArea.h"
#include "../HTML/HTMLHeader.h"

#include "../HTML/HTMLVideo.h"
#include "../HTML/HTMLSmall.h"


#include "../Sql/Sql.h"
#include "../Sql/SqlRow.h"
#include "../Sql/SqlTable.h"

#include "../Js/Js.h"

#include "../PHP/PHPFun.h"
#include "../PHP/PHPFuncs.h"
#include "../PHP/PHPInject.h"
#include "../PHP/PHPMethod.h"

#include "../Css/Css.h"

#include "Site.h"

#include "ProjectItem.h"

//void registerType();
#define REGISTRYTYPE \
  qmlRegisterType<Page>("Root", 1,0, "Page");\
  qmlRegisterType<Root>("Root", 1,0, "Root");\
  qmlRegisterType<Dir>("Root", 1,0, "Dir");\
\
  qmlRegisterType<ProjectItem>("ProjectItem", 1,0, "ProjectItem");\
\
  qmlRegisterType<HTMLTextArea>("HTML", 1,0, "TextArea");\
  qmlRegisterType<HTMLHeader>("HTML", 1,0, "Header");\
  qmlRegisterType<HTMLScript>("HTML", 1,0, "Script");\
  qmlRegisterType<HTMLButton>("HTML", 1,0, "Button");\
  qmlRegisterType<HTMLBlock>("HTML", 1,0, "Block");\
  qmlRegisterType<HTMLLabel>("HTML", 1,0, "Label");\
  qmlRegisterType<HTMLTitle>("HTML", 1,0, "Title");\
  qmlRegisterType<HTMLStyle>("HTML", 1,0, "Style");\
  qmlRegisterType<HTMLNav>("HTML", 1,0, "Nav");\
  qmlRegisterType<HTMLDiv>("HTML", 1,0, "Div");\
  qmlRegisterType<HTMLImg>("HTML", 1,0, "Img");\
  qmlRegisterType<HTMLEl>("HTML", 1,0, "El");\
  qmlRegisterType<HTMLInput>("HTML", 1,0, "Input");\
  qmlRegisterType<HTMLH1>("HTML", 1,0, "H1");\
  qmlRegisterType<HTMLH2>("HTML", 1,0, "H2");\
  qmlRegisterType<HTMLH3>("HTML", 1,0, "H3");\
  qmlRegisterType<HTMLH4>("HTML", 1,0, "H4");\
  qmlRegisterType<HTMLH5>("HTML", 1,0, "H5");\
  qmlRegisterType<HTMLH6>("HTML", 1,0, "H6");\
  qmlRegisterType<HTMLUl>("HTML", 1,0, "Ul");\
  qmlRegisterType<HTMLLi>("HTML", 1,0, "Li");\
  qmlRegisterType<HTMLP>("HTML", 1,0, "P");\
  qmlRegisterType<HTMLA>("HTML", 1,0, "A");\
  qmlRegisterType<HTMLVideo>("HTML", 1,0, "Video");\
  qmlRegisterType<HTMLSmall>("HTML", 1,0, "Small");\
  qmlRegisterType<Css>("HTML", 1,0, "Css");\
\
  qmlRegisterType<Js>("Js", 1,0, "Js");\
\
  qmlRegisterType<PHPInject>("PHP", 1,0, "PHPInject");\
  qmlRegisterType<PHPMethod>("PHP", 1,0, "PHPMethod");\
  qmlRegisterType<PHPFuncs>("PHP", 1,0, "Funcs");\
  qmlRegisterType<PHPFun>("PHP", 1,0, "PHPFun");\
\
  qmlRegisterType<Sql>("SQL", 1,0, "Sql");\
  qmlRegisterType<SQLRow>("SQL", 1,0, "SQLRow");\
  qmlRegisterType<SQLTable>("SQL", 1,0, "SQLTable");\
  qmlRegisterType<SqlCreateTable>("SQL", 1,0, "SqlCreateTable");\
  qmlRegisterType<SqlCreateTableColumn>("SQL", 1,0, "SqlCreateTableColumn");\


#endif // REGISTERTYPE_H
