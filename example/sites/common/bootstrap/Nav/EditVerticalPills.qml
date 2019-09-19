import HTML 1.0

Div {
    id: main1
    className: "row"

    Div {
        className: "col-2"
        Div {
            className: "nav flex-column nav-pills"
            idName: "v-pills-tab"
            role: "tablist"
            ariaOrientation: "vertical"

            A {
                id: page1
                property string activePage: "index"
                className: "nav-link active"
                idName: "v-pills-" + activePage + "-Index-tab"
                dataToggle: "pill"
                href: "#v-pills-tab-" + activePage
                role: "tab"
                ariaControls: "v-pills-tab-" + activePage
                ariaSelected: "true"

                Block{ text:  page1.activePage}
            }
            A {
                id: page2
                property string activePage: "about"
                className: "nav-link"
                idName: "v-pills-tab-" + activePage + "-tab"
                dataToggle: "pill"
                href: "#v-pills-tab-" + activePage
                role: "tab"
                ariaControls: "v-pills-tab-" + activePage
                ariaSelected: "false"

                Block{ text: page2.activePage }
            }
        }

    }

    Div {
        className: "col-9"
        Div {
            className: "tab-content"
            idName: "v-pills-tabContent"

            Div {
                property string activePage: "index"
                className: "tab-pane fade show active"
                idName: "v-pills-tab-" + activePage
                role: "tabpanel"
                ariaLabelledby: "v-pills-tab-" + activePage + "-tab"

                EditPills {
                    activePage: "index";
                    activeId: 0;

                    block: Block{text:"ta.sd1)"}
                }
                EditPills {
                    activePage: "index";
                    activeId: 1;

                    block: Block{text:"ta.sd2)"}
                }
            }
            Div {
                property string activePage: "about"

                className: "tab-pane fade"
                idName: "v-pills-tab-" + activePage

                role: "tabpanel"
                ariaLabelledby: "v-pills-tab-" + activePage + "-tab"

                EditPills {
                    activePage: "about";
                    activeId: 2;

                    block: Block {
                        text: '<div class="el-f"><div class="desc-f">  <img src="/img/sb1.png" alt="" style="float: right;"><h2>Пеноплиуретан</h2>
                               <p>Преимущество пенополиуретана (ППУ)  перед другими видами утеплителей - имеет наименьшую величину теплопроводности из всех известных в мире теплоизоляционных материалов (коэффициент теплопроводности 0,019-0,025Вт/м град).</p>
                               <p>Плотность 45 кг./м.куб.</p>
                               <p>Всвязи со своими техническими особенностями, сэндвич панели из пенополиуретана широко востребованы в холодильной отрасли.</p></div></div>'
                    }

                }
                EditPills {
                    activePage: "about";
                    activeId: 3;

                    block: Block {
                        text: '<div class="desc-f">  <img src="/img/ge1.jpg" alt="" style="float: left;"><h2>Доборные (фасонные) элементы</h2>
                               <p>При монтаже сэндвич панелей используют доборные элементы : швеллера, уголки, нащельники, отливы, коньки и др.</p>
                               <p>Изготовим любые фасонные элементы по Вашим чертежам. Цветовая гамма по катологу <strong>RAL.</strong></p></div>'
                    }

                }
            }
        }
    }
}
