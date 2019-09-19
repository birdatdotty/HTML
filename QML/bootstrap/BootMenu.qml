import HTML 1.0

El {
  property var activePage: ""
  property var list
  property var listTitle
  property var listUrl
  property bool fill: false

  default property alias testBlock: navCTX

  typeName: "nav"
  className: "navbar sticky-top navbar-expand-lg navbar-light bg-light"

  A {
    className: "navbar-brand"
    text: listTitle[activePage] ? listTitle[activePage] : ""
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
          id: navCTX

          typeName: "ul"
          className:  fill ? "navbar-nav nav-justified w-100" : "navbar-nav"
      }
  }
}
