
function form(name, phone, ariaLabelle = "ariaLabelle") {
  var ret = "";
  ret += '<div class="form-group">';
  ret += '<label for="' + name + '">Представтесь:</label>';
  ret += '<input name="name" type="text" class="form-control" id="' + name + '" aria-describedby="nameHelp" placeholder="Введите имя">';
  ret += '<small id="nameHelp" class="form-text text-muted">Как к вам обращатся</small>';
  ret += '</div>';
  ret += '<div class="form-group">';
  ret += '<label for="' + phone + '">Телефон:</label>';
  ret += '<input name="phone" type="text" class="form-control" id="' + phone + '" aria-describedby="phoneHelp" placeholder="Введите телефон">';
  ret += '<small id="phoneHelp" class="form-text text-muted">По какому номеру можно с вами связатся</small>';
  ret += '</div>';
  ret += '<script>$("#' + phone + '").mask("+7(999) 999-99-99")</script>';

  return ret;
}

function script()
{
    return "";
  var ret = "<script>\n";
  ret += "  function closeModal(a) {\n";
  ret += "    $(a).modal(\"hide\");\n";
  ret += "  }\n";
  ret += "</script>";

  return ret;
}

function sendAjaxForm()
{
    return "";
  var ret = "<script>\n";
  ret += '  function sendAjaxForm(result_form, ajax_form, url) {\n'
  ret += '    $.ajax({\n'
  ret += '      url:     url, //url страницы (action_ajax_form.php)\n'
  ret += '      type:     "POST", //метод отправки\n'
  ret += '      dataType: "html", //формат данных\n'
  ret += '      data: $("#"+ajax_form).serialize(),  // Сеарилизуем объект\n'
  ret += '      success: function(response) { //Данные отправлены успешно\n'
//  ret += '        result = $.parseJSON(response);\n'
//  ret += '        $('#result_form').html('Имя: '+result.name+'<br>Телефон: '+result.phonenumber);\n'
  ret += '        $("#"+result_form).html(response);'
  ret += '      },\n'
  ret += '      error: function(response) { // Данные не отправлены\n'
//  ret += '          $('#result_form').html('Ошибка. Данные не отправлены.');\n'
  ret += '      }\n'
  ret += '    })\n'
  ret += '  };\n'
  ret += "</script>"

  return ret;
}

function callmeBtn(idStr)
{
    return "";
//    return "<button class='btn btn-primary' onclick=\"sendAjaxForm("", \"wwwwwww\", \"/callme.php\")\">заказать звонок</button>";
    var ret = "<button class='btn btn-primary' onclick=\"sendAjaxForm('" + idStr + "', '" + idStr + "', '/callme.php')\">заказать звонок</button>";

    return ret;
}
