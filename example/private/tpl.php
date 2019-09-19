<?php
  class tpl {
  function anyMethod($tab, $arg1)
  {
    return "<a href='".$arg1."'></a>";
  }

  function elF($in)
  { return "<div class='el-f'>$in</div>"; }
  function descF($in,$id)
  { return "<div id=$id class='desc-f post'>$in</div>"; }
  function pics($in)
  { return "<div class='pics'>$in</div>"; }

  function mkDiv($type, $row, $page, $id=0)
  {
    if ($type == "desc-f")
      $row = $this->descF($row,$page.$id);
    if ($type == "pics")
      $row = $this->pics($row);

    return $this->elF($row);
  }
}

?>