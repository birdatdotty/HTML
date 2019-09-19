import HTML 1.0

import "bootstrap"

BootMenu{
    id: main
    fill: true
    property var page: ""

    property string color1: "#2eff46"
    property string color2: "#fffc06"

    css: ".header {
  background: radial-gradient(70% 38%, " + color1 + ", " + color2 + ");
  font-size: 29px;
}

.header > ul {
  list-style: outside none none;
  margin-left: 20px;
}
@media (min-width: 992px) {
  .navbar {
    padding: 0;
  }
  .navbar > div > ul > li > a.active {
    background-image: linear-gradient(to top, rgb(255, 252, 6), rgb(46, 255, 70));
    /*background-image: linear-gradient(to top, " + color1 + " 10%, " + color2 + " 40%, " + color2 + " 60%, " + color1 + " 90%);)*/
    background-size: auto;
    background-origin: padding-box;
    background-clip: border-box;
    color: #000 !important;
  }
  .navbar > div > ul > li > a:hover {
    color: #000 !important;
  }
  .header button.btn
  {
     width: 100%;
  }
  .navbar > * {
    background-color: " + color2 + ";
  }
  .navbar > a {
    padding-right: 1rem;
    margin-right: 0;
    background-color: " + color2 + ";
  }
  .navbar > div > ul > li > a {
    background-color: #fffc06;
    color: #23d0c4 !important;
    font-weight: bold;
  }
  .navbar {
    background-color: " + color2 + ";
  }
  .navbar-brand { display: none; }
  .nav-link { height: 100%; }
}
@media (max-width: 991px) {
  .navbar {
    background: linear-gradient(to top, " + color2 + ", " + color1 + ");
    background-color: rgba(0, 0, 0, 0);
    background-position-x: 0%;
    background-position-y: 0%;
    background-repeat: repeat;
    background-attachment: scroll;
    background-image: linear-gradient(to top, " + color2 + ", " + color1 + ");
    background-size: auto;
    background-origin: padding-box;
    background-clip: border-box;
  }
}
.dropdown-item:hover, .dropdown-item.active {
  background-color: " + color1 + ";
  color: black;
  font-weight: bold;
}
.dropdown-menu {
  background-color: " + color2 + ";
}
"

    activePage: page
    idName: "menu"
    list: ["index", "sp", "ge", "cd", "osb", "sg", "valve", "DOORHAN", "contacts"]
    listTitle: {"index":"Главная",
                "sp":"Сэндвич панели",
                "ge":"Доборные элементы",
                "cd":"Холодильные двери",
                "osb":"OSB сэндвич панели",
                "sg":"Скоростные ворота",
                "DOORHAN":"Секционные ворота и рольставни DOORHAN",
                "contacts":"Контакты",
                "valve":"Вентиляционные клапаны"}

//    listUrl:   {"index": "/index.php",
//                "sp":"/sp.php",
//                "ge":"/ge.php",
//                "cd":"/cd.php",
//                "osb":"/osb.php",
//                "sg":"/sg.php",
//                "DOORHAN":"/DOORHAN.php",
//                "contacts":"/contacts.php",
//                "valve":"valve.php"}


    function test (page, activePage)
    {
        if (page === activePage)
            return " active";

        return "";
    }

    function test1 (page)
    {
        var list = ["sp", "ge", "osb"];
        if (list.indexOf(page) >= 0)
            return " active";

        return "";
    }



    function test2 (page)
    {
        var list = ["sg", "DOORHAN"];
        if (list.indexOf(page) >= 0)
            return " active";

        return "";
    }

    testBlock.blocksList: Block{
        NavBarLi{page: "index"; activePage: main.page; li: "Главная"; url: "/index.php"}
    //    NavBarLi{page: "sp"; activePage: main.page; li: "Сэндвич панели"; url: "/sp.php"}
    //    NavBarLi{page: "ge"; activePage: main.page; li: "Доборные элементы"; url: "/ge.php"}
    //    NavBarLi{page: "osb"; activePage: main.page; li: "OSB сэндвич панели"; url: "/osb.php"}
        NavBarLi{page: "cd"; activePage: main.page; li: "Холодильные двери"; url: "/cd.php"}
        NavBarLi{page: "valve"; activePage: main.page; li: "Вентиляционные клапаны"; url: "/valve.php"}
    //    NavBarLi{page: "sg"; activePage: main.page; li: "Скоростные ворота"; url: "/sg.php"}
    //    NavBarLi{page: "DOORHAN"; activePage: main.page; li: "Секционные ворота и рольставни DOORHAN"; url: "/DOORHAN.php"}

        Li {
            className: "nav-item dropdown"
            A {
                className: "nav-link dropdown-toggle" + test1(main.page)
                dataToggle: "dropdown"
                href: "/sp.php"
                role: "button"
                ariaHaspopup: "true"
                ariaExpanded: "false"
                text: "Сэндвич панели"
            }
            Div {
                className: "dropdown-menu dropdown-menu-right"
                A {
                    className: "dropdown-item" + test("sp", main.page)
                    href: "/sp.php"
                    text: "Сэндвич панели"
                }
                A {
                    className: "dropdown-item" + test("ge", main.page)
                    href: "/ge.php"
                    text: "Доборные элементы"
                }
                A {
                    className: "dropdown-item" + test("osb", main.page)
                    href: "/osb.php"
                    text: "OSB сэндвич панели"
                }
            }
        }
        Li {
            className: "nav-item dropdown"
            A {
                className: "nav-link dropdown-toggle" + test2(main.page)
                dataToggle: "dropdown"
                href: "/sg.php"
                role: "button"
                ariaHaspopup: "true"
                ariaExpanded: "false"
                text: "Ворота"
            }
            Div {
                className: "dropdown-menu dropdown-menu-right"
//                Block { text: '    <form class="form-inline my-2 my-lg-0">
//              <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
//              <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Search</button>
//            </form>'}

                A {
                    className: "dropdown-item" + test("sg", main.page)
                    href: "/sg.php"
                    text: "Скоростные ворота"
                }
                A {
                    className: "dropdown-item" + test("DOORHAN", main.page)
                    href: "/DOORHAN.php"
                    text: "Секционные ворота и рольставни DOORHAN"
                }
            }
        }
        NavBarLi{page: "contacts"; activePage: main.page; li: "Контакты"; url: "/contacts.php"}

    }

}
