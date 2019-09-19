import HTML 1.0

//<div class="jumbotron">
//  <h1 class="display-4">Hello, world!</h1>
//  <p class="lead">This is a simple hero unit, a simple jumbotron-style component for calling extra attention to featured content or information.</p>
//  <hr class="my-4">
//  <p>It uses utility classes for typography and spacing to space content out within the larger container.</p>
//  <a class="btn btn-primary btn-lg" href="#" role="button">Learn more</a>
//</div>
Div {
    property string type: "primary"
    property string message
    property Block block: Block {}
    property alias h1: h1.text
    property alias p: p.text
    property var anyBlock: P{text: "ddd1"}

    function add(anyBlock)
    {
        site.addStyleRule(".jumbotron{margin-bottom: 0 !important;}")
        if (anyBlock)
            return anyBlock.minOut()

        return ""
    }

    className: "jumbotron"
    H1 {
        id: h1
        className: "display-4"
        text: "Hello, world dev path!"
    }
    Block {text: "<hr class='my-4'>"}
    P {
        id: p
        text: "It uses utility classes for typography and spacing to space content out within the larger container."

    }
    Block{text: add(anyBlock)}
}
//BootBreadcrumb
