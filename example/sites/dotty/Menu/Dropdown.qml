import HTML 1.0

Li {
  id: main
  property string name: ""
  property string href: ""
  property bool active: false
  default property alias inner: inner1


  className: "nav-item dropdown"
  A {
      className: active?  "nav-link dropdown-toggle active" : "nav-link dropdown-toggle"
      dataToggle: "dropdown"
      href: main.href
      role: "button"
      ariaHaspopup: "true"
      ariaExpanded: "false"
      text: main.name
  }
  Div {
      id: inner1
      className: "dropdown-menu"
  }

}
