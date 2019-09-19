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
  function descF($in)
  { return "<div class=\'desc-f\'>$in</div>"; }
  function pics($in)
  { return "<div class=\'pics\'>$in</div>"; }

  function mkDiv($type, $row)
  {
    if ($type == "desc-f")
      $row = $this->descF($row);
    if ($type == "pics")
      $row = $this->pics($row);

    return $this->elF($row);
  }
}

?>'}

}
