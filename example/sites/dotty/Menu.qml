import HTML 1.0

import "bootstrap"
import "Menu"

BootMenu{
    id: main
    fill: true
    property var page: ""
    property var list1: ["cc", "php", "mysql", "js", "html"];
    property var list2: [];

    css: "@media (min-width: 992px){" +
".navbar-brand{display: none}" +
"#navbarNav a.active{background-color: #9ff}" +
".nav-link:hover{font-weight: bold;}" +
"}"

    activePage: page
    idName: "menu"
//    list: ["index", "sp", "ge", "cd", "osb", "sg", "valve", "DOORHAN", "contacts"]
    listTitle: {"index":"Главная",
                "web":"Web",
                "cc":"c/c++",
                "php":"php",
                "mysql":"MySQL",
                "js":"JavaScript",
                "html":"HTML"}

    function test (page, activePage)
    {
        if (page === activePage)
            return true;

        return false;
    }

    function test1 (page)
    {
        if (list1.indexOf(page) >= 0)
            return true;

        return false;
    }
    function test2 (page)
    {
        if (list2.indexOf(page) >= 0)
            return true;

        return false;
    }



//    function test2 (page)
//    {
//        var list = ["sg", "DOORHAN"];
//        if (list.indexOf(page) >= 0)
//            return " active";

//        return "";
//    }

    testBlock.blocksList: Block{
        NavBarLi{page: "index"; activePage: main.page; li: "Главная"; url: "/index.php"}
        NavBarLi{page: "web"; activePage: main.page; li: "web"; url: "/web.php"}

        Dropdown {
            name: "Программирование"
            active: test1(main.page)
            inner.blocksList: Block {
                DropdownItem {name: "C/C++";href: "/programm/cc.php"; active: "cc" == page}
//                DropdownItem {name: "PHP";href: "/programm/php.php"; active: "php" == page}
//                DropdownItem {name: "MySQL";href: "/programm/mysql.php"; active: "mysql" == page}
//                DropdownItem {name: "JavaScript";href: "/programm/js.php"; active: "js" == page}
//                DropdownItem {name: "HTML";href: "/programm/html.php"; active: "html" == page}
            }
        }
//        Dropdown {
//            name: "Эксперименты"
//            active: test2(main.page)
//            inner.blocksList: Block {
//                DropdownItem {name: "C/C++";href: "programm/cc.php"; active: "cc" == page}
//                DropdownItem {name: "PHP";href: "programm/php.php"; active: "php" == page}
//                DropdownItem {name: "MySQL";href: "programm/mysql.php"; active: "mysql" == page}
//                DropdownItem {name: "JavaScript";href: "programm/js.php"; active: "js" == page}
//                DropdownItem {name: "HTML";href: "programm/html.php"; active: "html" == page}
//            }
//        }

    }

}
