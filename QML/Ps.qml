import HTML 1.0

// <a class="nav-link active" id="v-pills-home-tab" data-toggle="pill" href="#v-pills-home" role="tab" aria-controls="v-pills-home" aria-selected="true">Home</a>
// <a class='nav-link active' id='v-pills-home-tab' data-toggle='pill' href='#v-pills-home' role='tab' aria-controls='v-pills-home' aria-selected='true'>
//<a class="nav-link active"
//   id="v-pills-home-tab"
//   data-toggle="pill"
//   href="#v-pills-home"
//   role="tab"
//   aria-controls="v-pills-home"
//   aria-selected="true">Home</a>
A {
    type: "dd"
    default property alias block: in1.block
    className: "nav-link active"
    idName: "v-pills-home-tab"
    dataToggle: "pill"
    href: "#v-pills-home"
    role: "tab"
    ariaControls: "v-pills-home"
    ariaSelected: "true"
    Div {
        id:in1
        property var block: Block{}
        className: "tab-pane fade show active"
        idName: "v-pills-home"
        role: "tabpanel"
        ariaLabelledby: "v-pills-home-tab"
        Block{text: block.minOut()}
//        block{}
    }

}
//<div class="tab-pane fade show active" id="v-pills-home" role="tabpanel" aria-labelledby="v-pills-home-tab">...</div>
//<div id='v-pills-home' class='tab-pane fade show active' aria-labelledby='v-pills-home-tab' role='tabpanel'>
