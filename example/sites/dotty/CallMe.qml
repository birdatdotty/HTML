import HTML 1.0
import Js 1.0

import "bootstrap"
import "TestModalConst.js" as Const
import "bootstrap/common.js" as Common
import "Glob.js" as Glob


Block {
    id: callme
    property string idStr: "callme" //Common.makeid(4, "callme")
    property string formId: idStr + "Form"

    js: Js {
        name: "closeModal"
        args: "a"
        body: '$(a).modal("hide");'
    }


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
        footer.blocksList: Block{ text: "<button class='btn btn-primary' onclick=\"sendAjaxForm('" + idStr + "', '" + idStr + "', '/callme.php')\">заказать звонок</button>"}
            //Const.callmeBtn(formId);

        body: Block
          {
            id: form

            property string phone: "phone22"
            property string name: "name"
//            text: Const.form(name, phone)
              Div {
                  className: "form-group"

                  Label {
                      argFor: form.name
                      text: "Представтесь:"
                  }
                  Input {
                      name: "name"
                      type: "text"
                      className: "form-control"
                      idName: form.name
                      ariaDescribedby: "nameHelp"
                      placeholder: "Введите имя"
                  }
                  Small{
                      idName: "nameHelp"
                      className: "form-text text-muted"
//                      options: "text-muted"

                      text: "Как к вам обращатся"
                  }
              }
              Div {
                  className: "form-group"

                  Label {
                      argFor: form.phone
                      text: "Представтесь:"
                  }
                  Input {
                      name: "phone"
                      type: "text"
                      className: "form-control"
                      idName: form.phone
                      ariaDescribedby: "phoneHelp"
                      placeholder: "Введите телефон"
                  }
                  Small{
                      idName: "phoneHelp"
                      className: "form-text text-muted"

                      text: "По какому номеру можно с вами связатся"
                  }
                  Block{
                      text: '<script>$("#' + form.phone + '").mask("+7(999) 999-99-99")</script>'
                  }
              }
          }
        }
      }
    Block { text:
            Const.sendAjaxForm("parent.formId")
    }
}
