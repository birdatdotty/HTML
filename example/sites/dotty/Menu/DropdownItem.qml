import HTML 1.0

A {
    property bool active: false
    property string name: ""
//    className: if (active == true) ? "dropdown-item" : "test("osb", main.page)"
    className: active?  "dropdown-item active" : "dropdown-item"
    text: name
}
