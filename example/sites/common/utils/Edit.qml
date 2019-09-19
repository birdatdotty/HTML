import HTML 1.0
import Js 1.0

Block {
    js: Js{
    name: "createBtn"
    args: "img, f, el, classBtn = 'primary'"
    body: 'elImg = document.createElement("img");'+
  'elImg.src = img;'+

  'b = document.createElement("button");'+
  'b.textContent=name;'+
  'b.classList = "btn edit btn-" + classBtn;'+
  'console.log("createBtn:",el);'+
  'b.onclick = f.bind(el);'+

  'b.append(elImg);'+

  'return b;'

    }
}
