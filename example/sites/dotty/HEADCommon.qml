import HTML 1.0


import "bootstrap"


El {
    typeName: "head"
    property string title: ""

    Block { text: "<meta charset='utf-8'>" }
    Title { text: title; tab: 0 }
//    Block { text: '<link rel="icon" type="image/png" href="/img/v3.svg" />'}
    Block { text: '<link rel="stylesheet" type="text/css" href="' + site.getStyleFile() + '">'}
    Block { text: '<script src="/js/main.js"></script>'; tab: 0}
    Block { text: site.getHtmlStyle() }
    BootstrapHead{}

//    Style { text: '#list-example-scroll{height: 200;overflow-y: scroll;}' }
    El {
        tab: 0
        typeName: "style"
        text: '#list-example-scroll{height: 300px;overflow-y: scroll;}'
    }

}
