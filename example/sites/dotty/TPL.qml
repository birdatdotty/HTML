import PHP 1.0
import HTML 1.0

Block {
  property string pHPClassName: "tpl"
  Block{text:
'<?php
  class ' + pHPClassName + ' {
'}
  Block{
    Block{

      PHPMethod{
       name: "anyMethod"
        args:"$arg1"
        obj: A{ href: '".$arg1."'}
      }

    }
  }

  Block{text:
'
  function elF($in)
  { return "<div class=\'el-f\'>$in</div>"; }
  function descF($in,$id)
  { return "<div id=$id class=\'desc-f post\'>$in</div>"; }
  function pics($in)
  { return "<div class=\'pics\'>$in</div>"; }

  function mkDiv($type, $row, $page, $id=0)
  {
    if ($type == "desc-f")
      $row = $this->descF($row,$page.$id);
    if ($type == "pics")
      $row = $this->pics($row);

    return $this->elF($row);
  }
}

?>'}

}
