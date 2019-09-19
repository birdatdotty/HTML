QT += qml testlib widgets
QMAKE_CXXFLAGS += -std=c++17

SOURCES += \
        Confirm.cc \
        main.cc

HEADERS += \
        Confirm.h

INCLUDEPATH += /opt/HTML/include
#DEPENDPATH += /opt/HTML/include

LIBS += -lstdc++fs
LIBS += -L/opt/HTML/lib/ -lHTML -lJs -lCss -lPHP -lSql -lSite

DISTFILES += \
  ../sites/common/CSS/Basic.qml \
  ../sites/common/CSS/BodyBackground.qml \
  ../sites/common/CSS/Footer.qml \
  ../sites/common/CSS/Volar.qml \
  ../sites/common/bootstrap/BootAlert.qml \
  ../sites/common/bootstrap/BootBadge.qml \
  ../sites/common/bootstrap/BootBotton2.qml \
  ../sites/common/bootstrap/BootBreadcrumb.qml \
  ../sites/common/bootstrap/BootCarousel.qml \
  ../sites/common/bootstrap/BootJumbotron.qml \
  ../sites/common/bootstrap/BootMenu.qml \
  ../sites/common/bootstrap/BootModal.qml \
  ../sites/common/bootstrap/BootScrollspy.qml \
  ../sites/common/bootstrap/BootstrapHead.qml \
  ../sites/common/bootstrap/Nav/EditPills.qml \
  ../sites/common/bootstrap/Nav/EditVerticalPills.qml \
  ../sites/common/bootstrap/Nav/Pills.qml \
  ../sites/common/bootstrap/Nav/PillsCtx.qml \
  ../sites/common/bootstrap/Nav/PillsMenu.qml \
  ../sites/common/bootstrap/Nav/VerticalPills.qml \
  ../sites/common/bootstrap/Nav/VerticalPillsCtx.qml \
  ../sites/common/bootstrap/Nav/VerticalPillsMenu.qml \
  ../sites/common/bootstrap/NavBarLi.qml \
  ../sites/common/bootstrap/NavBarLiActive.qml \
  ../sites/common/bootstrap/common.js \
  ../sites/common/divs/CTX.qml \
  ../sites/common/divs/DescF.qml \
  ../sites/common/divs/ElF.qml \
  ../sites/common/divs/Figure.qml \
  ../sites/common/divs/Pics.qml \
  ../sites/common/handlers/Callme.qml \
  ../sites/common/utils/DocumentListenKey.qml \
  ../sites/common/utils/Edit.qml \
  ../sites/common/utils/JivoSite.qml \
  ../sites/common/utils/YandexShare.qml \
  ../sites/dotty/About.qml \
  ../sites/dotty/Admin.qml \
  ../sites/dotty/BootBotton.qml \
  ../sites/dotty/CSS.qml \
  ../sites/dotty/CSS/Basic.qml \
  ../sites/dotty/CSS/BodyBackground.qml \
  ../sites/dotty/CSS/Footer.qml \
  ../sites/dotty/CSS/Volar.qml \
  ../sites/dotty/CallMe.qml \
  ../sites/dotty/Configure.js \
  ../sites/dotty/Contacts.qml \
  ../sites/dotty/GetPost.qml \
  ../sites/dotty/GetPosts.qml \
  ../sites/dotty/Glob.js \
  ../sites/dotty/HEADCommon.qml \
  ../sites/dotty/Index.qml \
  ../sites/dotty/InfoPhp.qml \
  ../sites/dotty/JivoSite.qml \
  ../sites/dotty/Js.qml \
  ../sites/dotty/LgCenter.qml \
  ../sites/dotty/Menu.qml \
  ../sites/dotty/Menu/Dropdown.qml \
  ../sites/dotty/Menu/DropdownItem.qml \
  ../sites/dotty/Menu/Menu2.qml \
  ../sites/dotty/Menu/MenuItems.qml \
  ../sites/dotty/Mysql.qml \
  ../sites/dotty/NavContent.qml \
  ../sites/dotty/NavTab.qml \
  ../sites/dotty/OSBHTML.qml \
  ../sites/dotty/PHP.qml \
  ../sites/dotty/PHPDB.qml \
  ../sites/dotty/PHPFuncsFile.qml \
  ../sites/dotty/PHPSMTP.qml \
  ../sites/dotty/PHPTestSQL.qml \
  ../sites/dotty/ProjectDB.qml \
  ../sites/dotty/Ps.qml \
  ../sites/dotty/SQL.qml \
  ../sites/dotty/TPL.qml \
  ../sites/dotty/Test.qml \
  ../sites/dotty/TestModalConst.js \
  ../sites/dotty/Top.qml \
  ../sites/dotty/Txt.qml \
  ../sites/dotty/bootstrap/BootAlert.qml \
  ../sites/dotty/bootstrap/BootBadge.qml \
  ../sites/dotty/bootstrap/BootBotton2.qml \
  ../sites/dotty/bootstrap/BootBreadcrumb.qml \
  ../sites/dotty/bootstrap/BootCarousel.qml \
  ../sites/dotty/bootstrap/BootJumbotron.qml \
  ../sites/dotty/bootstrap/BootMenu.qml \
  ../sites/dotty/bootstrap/BootModal.qml \
  ../sites/dotty/bootstrap/BootScrollspy.qml \
  ../sites/dotty/bootstrap/BootstrapHead.qml \
  ../sites/dotty/bootstrap/Nav/EditPills.qml \
  ../sites/dotty/bootstrap/Nav/EditVerticalPills.qml \
  ../sites/dotty/bootstrap/Nav/Pills.qml \
  ../sites/dotty/bootstrap/Nav/PillsCtx.qml \
  ../sites/dotty/bootstrap/Nav/PillsMenu.qml \
  ../sites/dotty/bootstrap/Nav/VerticalPills.qml \
  ../sites/dotty/bootstrap/Nav/VerticalPillsCtx.qml \
  ../sites/dotty/bootstrap/Nav/VerticalPillsMenu.qml \
  ../sites/dotty/bootstrap/NavBarLi.qml \
  ../sites/dotty/bootstrap/NavBarLiActive.qml \
  ../sites/dotty/bootstrap/common.js \
  ../sites/dotty/divs/CTX.qml \
  ../sites/dotty/divs/DescF.qml \
  ../sites/dotty/divs/ElF.qml \
  ../sites/dotty/divs/Figure.qml \
  ../sites/dotty/divs/Pics.qml \
  ../sites/dotty/handlers/Callme.qml \
  ../sites/dotty/pages/Cc_1.qml \
  ../sites/dotty/pages/Cc_2.qml \
  ../sites/dotty/pages/Cd_1.qml \
  ../sites/dotty/pages/Cd_2.qml \
  ../sites/dotty/pages/Contacts_1.qml \
  ../sites/dotty/pages/Contacts_2.qml \
  ../sites/dotty/pages/Contacts_3.qml \
  ../sites/dotty/pages/Contacts_4.qml \
  ../sites/dotty/pages/DOORHAN_1.qml \
  ../sites/dotty/pages/Ge_1.qml \
  ../sites/dotty/pages/Index_1.qml \
  ../sites/dotty/pages/OSB_1.qml \
  ../sites/dotty/pages/OSB_2.qml \
  ../sites/dotty/pages/OSB_3.qml \
  ../sites/dotty/pages/OSB_4.qml \
  ../sites/dotty/pages/SG_1.qml \
  ../sites/dotty/pages/SG_2.qml \
  ../sites/dotty/pages/Sp_1.qml \
  ../sites/dotty/pages/Sp_2.qml \
  ../sites/dotty/pages/Sp_3.qml \
  ../sites/dotty/pages/Sp_4.qml \
  ../sites/dotty/pages/Sp_5.qml \
  ../sites/dotty/pages/Valve_1.qml \
  ../sites/dotty/pages/Web_1.qml \
  ../sites/dotty/pages/Web_2.qml \
  ../sites/dotty/pages/Web_3.qml \
  ../sites/dotty/pages/Web_4.qml \
  ../sites/dotty/root.qml \
  ../sites/dotty/utils/JivoSite.qml \
  ../sites/dotty/utils/YandexShare.qml \
  ../sites/dotty_dirs/img/9.gif \
  ../sites/dotty_dirs/img/bg.jpg
