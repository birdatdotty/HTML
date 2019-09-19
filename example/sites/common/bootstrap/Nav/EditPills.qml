import HTML 1.0

//<div class="row">
//  <div class="cols">
//    <div class="nav flex-column nav-pills" id="v-pills-tab" role="tablist" aria-orientation="vertical">
//      <a class="nav-link active" id="v-pills-home-tab" data-toggle="pill" href="#v-pills-home" role="tab" aria-controls="v-pills-home" aria-selected="true">
//        <img src="/img/eye.svg">
//      </a>
//      <a class="nav-link" id="v-pills-settings-tab" data-toggle="pill" href="#v-pills-settings" role="tab" aria-controls="v-pills-settings" aria-selected="false">
//        <img src="/img/pencil.svg">
//      </a>
//    </div>
//  </div>
//  <div class="cols">
//    <div class="tab-content" id="v-pills-tabContent">
//      <div class="tab-pane fade show active" id="v-pills-home" role="tabpanel" aria-labelledby="v-pills-home-tab">Any text</div>
//      <div class="tab-pane fade" id="v-pills-settings" role="tabpanel" aria-labelledby="v-pills-settings-tab"><textarea>Any text</textarea></div>
//    </div>
//  </div>
//</div>
Div {
    id: main
    className: "row"

    property string solt: ""
    property string activePage: "defaultactivePage"
    property int activeId: 2
    property Block block: Block{text: "property Block block"}

    // View:
    Div{
        className: "col-2"
        Div {
            className: "nav flex-column nav-pills"
            idName: "v-pills-tab-" + activePage + activeId
            role: "tablist"
            ariaOrientation: "vertical"

            A {
                className: "nav-link active"
                idName: "v-pills-view-"  + activePage + activeId + "-tab"
                dataToggle: "pill"
                href: "#v-pills-view-"  + activePage + activeId
                role: "tab"
                ariaControls: "v-pills-view-"  + activePage + activeId
                ariaSelected: "true"

                Img{ src: "/img/eye.svg" }
            }
            A {
                className: "nav-link"
                idName: "v-pills-edit-"  + activePage + activeId + "-tab"
                dataToggle: "pill"
                href: "#v-pills-edit-" + activePage + activeId
                role: "tab"
                ariaControls: "v-pills-"  + activePage + activeId
                ariaSelected: "false"

                Img{ src: "/img/pencil.svg" }
            }
        }
    }

    // Edit:
    Div{
        className: "col-10"

        Div {
            className: "tab-content"
            idName: "v-pills-tabContent-" + activePage

            Div {
                className: "tab-pane fade show active"
                role: "tabpanel"
                idName: "v-pills-view-" +  activePage + activeId
                ariaLabelledby: "v-pills-view-"  + activePage + activeId + "-tab"

//                Block {text: "anytext2"}
                Block {blocksList: block}
                Block {text: "<pre> PRE " + main.activePage + "</pre>"}
            }
            Div {
                className: "tab-pane fade"
                role: "tabpanel"
                idName: "v-pills-edit-"  + activePage + activeId
                ariaLabelledby: "v-pills-edit-"  + activePage + activeId + "-tab"

//                Block{text: "<textarea>Any text</textarea>"}
                TextArea {
                    idName: "editor-"  + activePage + activeId
                    Block {blocksList: block} //{text: "any text TextArea2"}
                }
                Div {
                    Button {className: "btn btn-primary"; text: "применить"; onclick: "$(&quot;#v-pills-view-" + activePage + activeId + '&quot;).html(globEdit_' + main.activePage + main.activeId + '.getData())'}
                    Button {className: "btn btn-success"; text: "сохранить"; onclick: "sendPost(globEdit_" + activePage + activeId + ".getData(), &quot;"+ main.activePage+"&quot;, " + main.activeId + ")"}
                }

                Script {
                    body: "createEditor('#editor-" + activePage + activeId + "', 'globEdit_" + main.activePage + main.activeId + "');"
//                 body: 'ClassicEditor.create( document.querySelector( \'#editor-' + solt + '\' ) )
//            .then( newEditor => {
//                editor' + main.solt + ' = newEditor;
//            } )
//            .catch( error => {
//                console.error( error );
//            } );'
                }
            }
        }

    }
}
