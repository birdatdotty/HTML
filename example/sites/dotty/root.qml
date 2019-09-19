import Root 1.0

import PHP 1.0
import HTML 1.0

import "divs"
import "CSS"
import "handlers"

Root {
    root: site.getRoot()
    property int nested: 1


    // pages:
    Page
    {
        file: "index.php"
        page: Index{}
    }
    Page
    {
        file: "web.php"
        page: Index{ page: "web"; title: "Немного про web"}
    }

    // programm ("cc", "php", "mysql", "js", "html"):
    Root {
        root: "programm"
        Page
        {
            file: "cc.php"
            page: Index{ page: "cc"; title: "Немного про web"; nested: 2}
        }
        Page
        {
            file: "php.php"
            page: Index{ page: "php"; title: "Немного про web"; /*nested: parent.parent.nested*/}
        }
        Page
        {
            file: "mysql.php"
            page: Index{ page: "mysql"; title: "Немного про web"; /*nested: parent.parent.nested*/}
        }
        Page
        {
            file: "js.php"
            page: Index{ page: "js"; title: "Немного про web"; /*nested: parent.parent.nested*/}
        }
        Page
        {
            file: "html.php"
            page: Index{ page: "html"; title: "Немного про web"; /*nested: parent.parent.nested*/}
        }
    }

    // public handlers
    Page {
        file: "callme.php"
        page: Callme{dir: site.getBackend()}
    }

    // private handlers (../private):
    Root {
        root: site.getBackend()
        Page
        {
            file: "phpSmtp.php"
            page: PHPSMTP{}
        }
        Page {
            file:  "tpl.php"
            page: TPL{}
        }
        Page {
            file: "admin.php"
            page: Admin {}
        }
        Page
        {
            file: "test.php"
            page: PHPFuncsFile{}
        }
        Page {
            file: "VOLARDB.php"
            page: PHPDB{}
        }
    }

    // Js:
    Page {
        file: "/js/main.js"
        page: Js{}
    }

    // need directories:
    Dir{
        dir: "/img"
        from: site.getDir() + "/img/"
    }
    Dir{
        dir: "/video"
        from: site.getDir() + "/video/"
    }
    Dir{
        dir: "files"
        from: site.getDir() + "/files/"
    }

    Css {
        file: site.getStyleFile()

        Basic{}
        Top{}
        Menu{}
        BodyBackground{img: "/img/bg.jpg"}
        Volar{}
        Footer{}
        Figure{}

        CTX{}
        ElF{}
        DescF{}
        Contacts{}
        Pics{}
    }

    SQL{}

}
