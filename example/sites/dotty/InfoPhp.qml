import HTML 1.0
import PHP 1.0

import "bootstrap"

Block {
    Block {text: "<!DOCTYPE html>"}
    El{
        typeName: "html"
        HEADCommon {title: "phpInfo"}
        El{
            typeName: "body"
            id: test
            BootJumbotron {
                property var s: Qt.createComponent('P{text: "ddd"}')
                h1: "Привет, мир!"
                p: "Тут будет что-то))" // + s.createObject(test, {text: "ddd"})

                anyBlock:
                BootModal {
                    buttonStr: "О";
                    header: "HeDeR!"
                    body: Label{text:"Проверка прошла успешно!"}
                }
            }
            Menu {
                page: "t"
            }
            Div {
                className: "col-lg-8 offset-lg-2"

                El {
                    typeName: "script"
                    text: "window.menu = $('#navbarNav');"
                }
                PHPTestSQL{inc: "d.php"}

            }
        }
    }
}
