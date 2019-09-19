import PHP 1.0

PHPInject
{
    property string fileName: "people.txt"
    src:'
if ($_POST) {
  $file = "' + fileName + '";
  $person = $_POST["name"];
  $file = fopen($file, "a+");
  fwrite($file, "$person". "\n");
  fclose($file);
}
'
}
