import HTML 1.0

Div {
    id: main1

    className: "row white"
    property var listIndex: []
    property string solt: "aaaaa"
    Div {
        className: "col-3"
        Div {
            className: "nav flex-column nav-pills"
            idName: "v-pills-tab"
            role: "tablist"
            ariaOrientation: "vertical"
            VerticalPillsMenu{solt: main1.solt;status: "active"; activePage: "index"; Div{Block{text:"11111"}}}
            VerticalPillsMenu{solt: main1.solt;activePage: "222"; Div{Block{text:"2222"}}}
        }

    }
    Div {
        className: "col-9"
        Div {
            className: "tab-content"
            idName: "v-pills-tabContent"
            VerticalPillsCtx {
                solt: main1.solt
                status: "show active";
                activePage: "index";
                Pills {
                    solt: "222222"//parent.solt + "pill"
                    block: Block{text:"111ddd"}
                }

//                Div{
//                    Block{text:"111ddd"}
//                }
            }
            VerticalPillsCtx {
                solt: main1.solt
                activePage: "222";
                Div{
                    Block {text:"2222222222222222222"}
                }
            }
        }
    }
}
