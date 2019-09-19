import HTML 1.0

Div {
    id: main

    className: "white"
    property var listIndex: []
    property string solt: "ooooo"

    property Block block: Block{text: "<h3>h3))</h3><p>any text</p>"}

    Div {
        className: "nav nav-pills"
        idName: "pills-tab"
        role: "tablist"

        Block {
            id: menuBlock
            property string solt: main.solt

            PillsMenu{
                solt: menuBlock.solt
                status: "active";
                activePage: "index";
                Block{text:"Просмотр"}
            }
            PillsMenu{
                solt: menuBlock.solt
                activePage: "222";
                Block{text:"Редактирование"}
            }
        }
    }

    Div {
        className: "tab-content"
        idName: "pills-tabContent"

        id: sb
        function ckeditor(text,solt)
        {
            return '<textarea name="content" id="editor' + solt +'">' + text + '</textarea>' +
                    '<script>ClassicEditor.create( document.querySelector( \'#editor' + solt + '\' ) )
            .catch( error => {
                console.error( error );
            } );
    </script>'
        }
        Block {
            id: editBlock
            property string solt: main.solt
            property Block block: main.block
            PillsCtx {
                status: "show active";
                activePage: "index";
                solt: editBlock.solt
                Block{text:editBlock.block.minOut()}
            }
            PillsCtx {
//                status: "show active";

                solt: editBlock.solt
                activePage: "222";
                Block {text: sb.ckeditor(
                                 editBlock.block.minOut(),
                                 editBlock.solt
                                )}
            }
        }
    }
}
