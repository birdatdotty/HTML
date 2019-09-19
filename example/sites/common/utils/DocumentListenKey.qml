import Js 1.0

Js {
    name: "addListener"
    args: "f"
    body: "document.addEventListener('keyup',function(e){"+
      "if(e.altMeta){f()});"
}
