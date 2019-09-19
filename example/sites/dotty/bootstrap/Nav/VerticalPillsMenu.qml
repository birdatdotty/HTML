import HTML 1.0

// <a class="nav-link active" id="v-pills-home-tab"
//   data-toggle="pill" href="#v-pills-home" role="tab"
//   aria-controls="v-pills-home" aria-selected="true">Home</a>
A {
  property string status: ""
  property string activePage: ""
  property string solt: ""

  idName: "v-pills-" + solt + "-" + activePage + "-tab"
  className: "nav-link " + status
  dataToggle: "pill"
  href: "#v-pills-" + solt + "-" + activePage
  role: "tab"
  ariaControls: "v-pills-" + solt + "-" + activePage
  ariaSelected: "true"
}
