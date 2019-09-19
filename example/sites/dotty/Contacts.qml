import HTML 1.0
import PHP 1.0

import "TestModalConst.js" as Const
import "bootstrap/common.js" as Common
import "Glob.js" as Glob
import "bootstrap"

import "Menu"
import "utils"

Block {
    id: main
    property string page: "index"

    css: ".contacts {
  padding: 10px;
  flex-direction: row;
  display: flex;
  justify-content: center;
  flex-wrap: wrap;
}
.contacts > .el-f {
    flex: 1 1 400px;
    justify-content: center;
    display: flex;
}
.contacts > .el-f > .desc-f {
    height: 100%;
    flex: 1 1 400px;
    justify-content: center;
    align-items: center;
    margin: 20px;
    display: flex;
    flex-direction: column;
}"
//    flex: 1 1 400px;
//    justify-content: center;

//    tab: -2
    Block {text: "<!DOCTYPE html>"}
    El{
        tab: 0
        typeName: "html"
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
                        id: callme
                        property string idStr: Common.makeid(4, "callme")
                        property string formId: idStr + "Form"

                        Div{
                          property string idStr: callme.idStr
                          property string formId: callme.formId

                          id: test
                          Block { text: Const.script(); }
                          BootModal {
                            idStr: callme.idStr
                            formId: callme.formId
                            buttonStr: "Заказать звонок";
                            header: "Заказать звонок!"
//                            footer:Const.callmeBtn(formId);

                            body: Block
                              {
                                property string phone: "phone22"
                                property string name: "name"
                                text: Const.form(name, phone)
                              }
                            }
                          }
                        Block { text:
                                Const.sendAjaxForm("parent.formId") }
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
                  Div {
                    className: "contacts"
                    GetPosts { pageStr: main.page }
                  }
              }
            }
            Block { text: "<footer class='footer'><p>Позвоните нам: 8 (499) 345 07 00</p><p>&copy; 2014 by Volar</p></footer>" }
            JivoSite { jvId: "8hi9822NAA" }
        }
    }
}
