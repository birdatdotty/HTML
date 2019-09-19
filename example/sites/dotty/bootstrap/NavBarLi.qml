import HTML 1.0

El {
    id: main

    property alias li:el.text
    property alias url:el.href

    property string page
    property string activePage

    typeName: "li"
    className: "nav-item"
    A {
        id: el
        className: page == activePage ? "nav-link active" : "nav-link"
        href: "#"
        text: ""
    }
}
