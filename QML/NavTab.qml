import HTML 1.0

import "bootstrap"
import "divs"

A {
    property alias title: title.text
    property bool active: false
    property string link
    className: active ? "nav-item nav-link active" : "nav-item nav-link"
    idName: "nav-" + link + "-tab"
    dataToggle: "tab"
    href: "#nav-" + link
    role: "tab"
    ariaControls: "nav-" + link
    ariaSelected: "true"
    Block{
        id: title
        text: ""
    }
}
