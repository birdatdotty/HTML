import HTML 1.0

Block {
    property string dir: "."
text: '<?php
include "' + dir + '/phpSmtp.php";

if ($_POST) {
  $person = $_POST["name"];
  $phone = $_POST["phone"];

  $send("Anatoliy A Mukha", "bird@dotty.su", "просьба перезвонить", "$person  $phone");
  //$send("Мария Анатольевна", "m.kalyazina@gmail.com", "просьба перезвонить", "$person  $phone");

  echo "Спасибо. Наш специалист свяжется с Вами";
}

?>'
}
