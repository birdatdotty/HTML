import HTML 1.0

//<div class="tab-pane fade show active" id="v-pills-home"
//  role="tabpanel" aria-labelledby="v-pills-home-tab">...</div>

Div {
  property string status: ""
  property string activePage: ""
  property string solt: ""
//  property var ctx: Block{text: "sss"}
//  default property var ctx
    default property alias ctx: inner.ctx

  className: "tab-pane fade " + status
  idName: "pills-" + solt + "-" + activePage
  role: "tabpanel"
  ariaLabelledby: "v-pills-" + solt + "-" + activePage + "-tab"
  Block {
      id: inner
      property var ctx: Block{text: "sss"}
      text: ctx.minOut()}
}

