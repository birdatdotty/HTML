import HTML 1.0

import "../bootstrap"

//BootMenu{
//    property var page: ""

//    activePage: page
//    idName: "menu"
//    list: ["index", "sp", "ge", "cd", "osb", "sg", "valve", "DOORHAN", "contacts"]
//    listTitle: {"index":"Главная",
//                "sp":"Сэндвич панели",
//                "ge":"Доборные элементы",
//                "cd":"Холодильные двери",
//                "osb":"OSB сэндвич панели",
//                "sg":"Скоростные ворота",
//                "DOORHAN":"Секционные ворота и рольставни DOORHAN",
//                "contacts":"Контакты",
//                "valve":"Вентиляционные клапаны"}

//    listUrl:   {"index": "/index.php",
//                "sp":"/sp.php",
//                "ge":"/ge.php",
//                "cd":"/cd.php",
//                "osb":"/osb.php",
//                "sg":"/sg.php",
//                "DOORHAN":"/DOORHAN.php",
//                "contacts":"/contacts.php",
//                "valve":"valve.php"}
//}
El {
  property var page: ""

  typeName: "nav"
  className: "navbar navbar-expand-lg navbar-light bg-light"

  A {
    className: "navbar-brand"
    text: page //listTitle[activePage] ? listTitle[activePage] : ""
//    href: "#"
  }
  Button {
      className: "navbar-toggler"
      type: "button"
      dataToggle: "collapse"
      dataTarget: "#navbarNav"
      ariaControls: "navbarNav"
      ariaExpanded: "false"
      ariaLabel: "Toggle navigation"
      El {
          typeName: "span"
          className: "navbar-toggler-icon"
      }
  }

  El {
      typeName: "div"
      className: "collapse navbar-collapse"
      idName: "navbarNav"
      id: navbarNav
      El {
          typeName: "ul"
          className: "navbar-nav"
//          Block{ text: genItems(activePage, list, listTitle, listUrl) }
          MenuItems{}

      }
  }


}
