import HTML 1.0
import PHP 1.0
import Js 1.0

import "TestModalConst.js" as Const
import "bootstrap/common.js" as Common
import "Glob.js" as Glob
import "bootstrap"

import "Menu"
import "utils"

Block {
    id: main
    property string page: "index"

//    tab: -2
    PHP { text: '<?php header("Cache-control: public");\nheader("Expires: " . gmdate("D, d M Y H:i:s", time() + 600) . " GMT");?>'}
    Block {text: "<!DOCTYPE html>"}

    El{
        tab: 0
        typeName: "html"
        options: 'lang="ru"'
        HEADCommon {title: Glob.getTitle(page) } //"Index"}

        El{
            typeName: "body"
            Header {
                className: "header"
                Img {
                  src: "/img/v3.svg"
                }
                El {
                    typeName: "span"
                    text: 'ООО "Волар"'
                }
                Ul {
                    Li { text: "+7 (499) 345 07 00"}
                    Li { text: "+7 (495) 205 68 28"}
                    Li {
                        CallMe{}
                    }
                }
            }

            Menu{page: main.page}
//            Menu2{page: main.page}
            El {
              typeName: "main"
              Div {
                  idName: "ctx"
//                  YandexShare{}
                  GetPosts { pageStr: main.page }
              }
            }
            Block { text: "<footer class='footer'><p>Позвоните нам: 8 (499) 345 07 00</p><p>&copy; 2014 by Volar</p></footer>" }
            JivoSite { jvId: "8hi9822NAA" }
        }
    }
}
