import HTML 1.0

//<div class="alert alert-primary" role="alert">
//  A simple primary alert—check it out!
//</div>
El {
    property string type: "primary"
    property string message

    typeName: "span"
    className: "badge badge-" + type
    text: message
}
