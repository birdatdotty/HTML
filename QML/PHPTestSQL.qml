import PHP 1.0

PHPInject {
    property string inc
//    src:'
//include "test.php";
//include "' + inc + '";
//foreach ($arr as $arr1)
//  {
//    foreach ($arr1 as $key => &$val)
//      {
//        echo $ss2($tab,"#".$key,$val);
//      }
//  }'
src:
'
$first = false;
include "test.php";
include "../' + inc + '";

$size = count($arr);
if ($size > 0)
{
  $first = $arr[0];
  $key = array_key_first($first);
  $val = $first[$key];
  echo ltrim($ss2($tab,"#".$key,$val));

  for ($i = 1; $i < $size; $i ++)
    {
      foreach ($arr[$i] as $key => &$val)
        {
          echo $ss2($tab,"#".$key,$val);
        }
    }
  }
'
}
