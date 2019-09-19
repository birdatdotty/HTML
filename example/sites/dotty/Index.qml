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
    property string title: "Главная"
    property int nested: 1

//    tab: -2
    PHP { text: '<?php header("Cache-control: public");\nheader("Expires: " . gmdate("D, d M Y H:i:s", time() + 600) . " GMT");?>'}
    Block {text: "<!DOCTYPE html>"}

    El{
        tab: 0
        typeName: "html"
        options: 'lang="ru"'
        HEADCommon { title: main.title }

        El{
            typeName: "body"

            Top{}
            Menu{page: main.page}

            El {
              typeName: "main"
              Div {
                  idName: "ctx"
                  YandexShare{}
//                  H2{text:"Всё на данном сайте может быть премененно вами для своех свободной лицензией"}
                  GetPosts { pageStr: main.page; nested: main.nested }
              }
            }
//            Block { text: "<footer class='footer'><p>Позвоните нам: 8 (499) 345 07 00</p><p>&copy; 2014 by Volar</p></footer>" }
//            JivoSite { jvId: "8hi9822NAA" }
        }
    }
}
