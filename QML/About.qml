import HTML 1.0

import "bootstrap"

Block {
    Block {text: "<!DOCTYPE html>"}
    El{
        typeName: "html"
        HEADCommon {title: "about"}
        El{
            typeName: "body"
            id: test
            BootJumbotron {
                property var s: Qt.createComponent('P{text: "ddd"}')
                h1: "Привет, мир!"
                p: "Тут будет что-то))"

                anyBlock:
                BootModal {
                    buttonStr: "О";
                    header: "HeDeR!"
                    body: Label{text:"Проверка прошла успешно!"}
                }
            }
            Menu {
                page: "about"
            }

            BootBreadcrumb { data: [
                        {"name":"About", "url" : "/about.html"},
                        {"name":"Test", "url" : "/about/test.html"}]
            }
            LgCenter{
                BootAlert
                {
                    message: "Test Al"
                    block: BootBadge{ message: "badge-warning"; type: "warning" }
                }
                BootAlert{ message: "Test Al"; }
                BootAlert{ message: "Test Al"; type: "secondary"}
                BootBadge{ message: "badge-warning"; type: "warning" }
        //        BootCarousel {data: ["/imgs/s1200.jpg", "/imgs/s1200-1.jpg", "/imgs/s1200-2.jpg"]; id_name: "sss"}

                BootModal {
                    buttonStr: "Проверка модального окна";
                    header: "HeDeR!"
                    body: Label{text:"Проверка прошла успешно"}
                }
                Button {
                    text: "HTML Button"
                }
                Label{
                    text: "HTML Label"
                    idName: "ihoiuoi"
                    argFor: "fdsf"
                }
            }

//            BootScrollspy{}
        }
    }
}
