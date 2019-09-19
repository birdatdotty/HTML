import PHP 1.0

PHPInject {
    property string pageStr: "index"
    src: 'require_once "'+ site.getBackend() + '/VOLARDB.php";
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
