$ss = function ($arg12,$arg13)
{
  return <a href='".$arg12."'>".$arg13."</a>";
};
$ss2 = function ($arg12,$arg13)
{
  return <div class='col-lg-8 offset-lg-2'><a href='".$arg12."'>".$arg13."</a></div>";
};
$EditPills = function ($arg1,$arg2)
{
  return <div class='row'><div class='col-2'><div id='v-pills-tab-defaultactivePage2' class='nav flex-column nav-pills' role='tablist' aria-orientation='vertical'><a href='#v-pills-view-defaultactivePage2' id='v-pills-view-defaultactivePage2-tab' class='nav-link active' data-toggle='pill' aria-controls='v-pills-view-defaultactivePage2' role='tab' aria-selected='true'><img  src='/img/eye.svg' alt=''></a><a href='#v-pills-edit-defaultactivePage2' id='v-pills-edit-defaultactivePage2-tab' class='nav-link' data-toggle='pill' aria-controls='v-pills-defaultactivePage2' role='tab' aria-selected='false'><img  src='/img/pencil.svg' alt=''></a></div></div><div class='col-10'><div id='v-pills-tabContent-defaultactivePage' class='tab-content'><div id='v-pills-view-defaultactivePage2' class='tab-pane fade show active' aria-labelledby='v-pills-view-defaultactivePage2-tab' role='tabpanel'>".$arg2."<pre> PRE defaultactivePage</pre></div><div id='v-pills-edit-defaultactivePage2' class='tab-pane fade' aria-labelledby='v-pills-edit-defaultactivePage2-tab' role='tabpanel'><textarea id='editor-defaultactivePage2'>".$arg2."</textarea><div><button onclick='$(&quot;#v-pills-view-defaultactivePage2&quot;).html(globEdit_defaultactivePage2.getData())' class='btn btn-primary'>применить</button><button onclick='sendPost(globEdit_defaultactivePage2.getData(), &quot;defaultactivePage&quot;, 2)' class='btn btn-success'>сохранить</button></div><script>createEditor('#editor-defaultactivePage2', 'globEdit_defaultactivePage2');</script></div></div></div></div>";
};
