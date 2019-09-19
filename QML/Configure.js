function setSite() {
    var stiky = "position: sticky;" +
                "top: 0;" +
                "z-index: 3;"

    site.setRoot("/srv/www/testsite.local/public_html/")
    site.setBackend("../private_html/")
    site.setStyleFile("/css/main.css")
    site.addStyleRule("p {text-indent: 1.5em;}");
    site.addStyleRule(".list-group-item:hover {background-color:#ccc;cursor: pointer;}")
    site.addStyleRule(".Left {float: left;}");
    site.addStyleRule("#menu11 {"+stiky+"}")
    site.setDir("/home/gluck/Volar/dirs/");
    site.setMinificate(true)
}
