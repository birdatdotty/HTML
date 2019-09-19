import HTML 1.0

import "./common.js" as Common

Block {
    id: main

    property string header: "Message"
    property string idStr: Common.makeid(10)
    property string formId: ""
    property string buttonStr: "button"
    property alias footer: footerBlock
    property var body: Block
    property string ariaLabelle: "ariaLabelle"

    Button {
       type: "button"
       className: "btn btn-primary"
       dataToggle: "modal"
       dataTarget: "#" + idStr
       text: buttonStr
    }
    Div {
        idName: idStr
        className: "modal fade bd-example-modal-xl"
        tabindex: "-1"
        role: "dialog"
        ariaLabelledby: main.ariaLabelle
        ariaHidden: "true"
        El {
            typeName: "div"
            className: "modal-dialog modal-xl"
            Div {
                className: "modal-content"
                idName: main.ariaLabelle
                Div {
                    className: "modal-header"
                    H5 { text: header }
                    Button {
                        typeName: "button"
                        type: "button"
                        className: "close"
                        dataDismiss: "modal"
                        ariaLabel: "Close"
                        El {
                            typeName: "span"
                            ariaHidden: "true"
                            text: "&times;"
                        }
                    }
                }
                Div {
                     className: "modal-body"
                     El { typeName: "form"; idName: formId; Block {text: body.minOut()} }
                }
                Div {
                    className: "modal-footer"
                    Block{ id: footerBlock }
                    Button {
                        type: "button"
                        className: "btn btn-secondary"
                        dataDismiss: "modal"
                        text: "закрыть"
                    }
                }

            }
        }

    }
}
