import HTML 1.0

//<div class="alert alert-primary" role="alert">
//  A simple primary alert—check it out!
//</div>
El {
    property string type: "primary"
    property string message
    property Block block: Block {}

    typeName: "div"
    className: "alert alert-" + type
    role: "alert"
    text: message + " " + block.minOut()
}
