import PHP 1.0
import HTML 1.0

import "bootstrap"
import "bootstrap/Nav"

Block {
//    text: "ddd"
    Block {text: "<!DOCTYPE html>"}
    El{
        typeName: "html"
        HEADCommon {title: "phpInfo"
            Block{text: '<script src="/js/ckeditor.js"></script>'}
            Block{text: '<style>'}
            Block{text: '.row .tab-pane textarea,'}
            Block{text: '.row .tab-pane {'}
            Block{text: 'min-height: 97px;}'}

            Block{text: '.nav-link > img {'}
            Block{text: '  width: 32px;'}
            Block{text: '}'}
//            /admin/index.php
//            /admin/sp.php
//            /admin/ge.php
//            /admin/cd.php
//            /admin/osb.php
//            /admin/sd.php
//            /admin/valve.php
//            /admin/DOORHAN.php
//            ? /admin/contacts.php
            Block{text: '</style>'}
            Script{
                body: 'function createEditor(textArea, globEditor)
{
ClassicEditor.create( document.querySelector( textArea ) )
        .then( newEditor => {
            window[globEditor] = newEditor;
        } )
        .catch( error => {
            console.error( error );
        } );
}
'
            }
            Script {
                body: 'function sendPost(newData,activePage,activeId){$.post("post.php", { id: activeId, page: activePage, data: newData } );}'
            }
        }
        El{
            typeName: "body"
            id: test
            Div{ className: "white"
                EditVerticalPills{}
            }


        }
    }
}
