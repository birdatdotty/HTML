function setSite() {
    var stiky = "position: sticky;" +
                "top: 0;" +
                "z-index: 3;"

    site.setRoot("/srv/www/dotty.local/public/")
    site.setBackend("../private/")
    site.setStyleFile("/css/main.css")
    site.addStyleRule("p {text-indent: 1.5em;}");
    site.addStyleRule(".list-group-item:hover {background-color:#ccc;cursor: pointer;}")
    site.addStyleRule(".Left {float: left;}");
    site.addStyleRule("#menu11 {"+stiky+"}")
//    site.setDir(".../site/dotty_dirs/");
    site.setMinificate(true);
    site.setDb("dotty");
}
