import HTML 1.0
import Js 1.0

Block {
  Js{
      name: "sendAjaxForm"
      args: "result_form, ajax_form, url"
      body: '
    $.ajax({
      url:     url,
      type:     "POST",
      dataType: "html",
      data: $("#"+ajax_form).serialize(),
      success: function(response) {
        $("#"+result_form).html(response);
      },
      error: function(response) {
      }
    })
'
  }
//  Js {
//      name: "closeModal"
//      args: "a"
//      body: '$(a).modal("hide");'
//  }
  Js {
      fromBlock: CallMe{}
  }
}
