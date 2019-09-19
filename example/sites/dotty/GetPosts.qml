import PHP 1.0

PHPInject {
    id: main
    property string pageStr: "index"
    property int nested: 1

    function calctulateDir()
    {
      var subDir = "../"
      return subDir.repeat(main.nested - 1)
    }

    src: 'require_once "' + calctulateDir() + site.getBackend() + '/VOLARDB.php";
echo $db->get("' + pageStr + '");
'
//    src: '
//include "../VOLARDB.php";
//$posts = $getPostsByPage("' + pageStr + '");
//foreach($posts as $post)
//  {
//    echo $post;
//  }
//'
}
