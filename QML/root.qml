import Root 1.0

import PHP 1.0
import HTML 1.0

import "divs"
import "CSS"
import "handlers"

Root {
    root: site.getRoot()

    // pages:
    Page
    {
        file: "index.php"
        page: Index{}
    }
    Page
    {
        file: "sp.php"
        page: Index{page: "sp"}
    }
    Page
    {
        file: "ge.php"
        page: Index{page: "ge"}
    }
    Page
    {
        file: "cd.php"
        page: Index{page: "cd"}
    }
    Page
    {
        file: "osb.php"
        page: Index{page: "osb"}
    }
    Page
    {
        file: "sg.php"
        page: Index{page: "sg"}
    }
    Page
    {
        file: "DOORHAN.php"
        page: Index{page: "DOORHAN"}
    }
    Page
    {
        file: "contacts.php"
        page: Contacts{page: "contacts"}
    }
    Page {
        file: "valve.php"
        page: Index{page: "valve"}
//        page: Valve{}
    }
    Page {
        file: "test.php"
        page: Test{}
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
        Menu{}
        BodyBackground{img: "/img/bg.png"}
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
