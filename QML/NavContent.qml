import HTML 1.0

import "bootstrap"
import "divs"

//  <div class="tab-pane fade" id="nav-profile" role="tabpanel" aria-labelledby="nav-profile-tab">'}
//                            GetPosts { pageStr: "ge" }
//                            Block {text:'</div>
    Div{
        property string name
        property bool active: false
        className: active ? "tab-pane fade show active" : "tab-pane fade"
        idName: "nav-" + name
        role: "tabpanel"
        ariaLabelledby: "nav-" + name + "-tab"
    }
