import HTML 1.0

import "bootstrap"
import "divs"

Block {
    Block {text: "<!DOCTYPE html>"}
    El{
        typeName: "html"
        HEADCommon {title: "test"}
        El{
            typeName: "body"
            id: test
            BootJumbotron {
                property var s: Qt.createComponent('P{text: "ddd"}')
                h1: "Привет, мир!"
                p: "Тут будет что-то))" // + s.createObject(test, {text: "ddd"})

                anyBlock:
                BootModal {
                    buttonStr: "О";
                    header: "HeDeR!"
                    body: Label{text:"Проверка прошла успешно!"}
                }
            }
            Menu {
                page: "test"
            }
            Div {
                className: "col-lg-8 offset-lg-2"
                ElF {
                    DescF {
                        Block {

Nav {
    // NavTabList
  Div {
      className: "nav nav-tabs"
      idName:"nav-tab"
      role: "tablist"

      NavTab{ title: "index"; active: true; link: "index" }
      NavTab{ title: "osb"; link: "osb" }
      NavTab{ title: "ge"; link: "ge" }
  }
}
                        }
                    }

Div {
    // TabContent
        className: "tab-content"
        idName: "nav-tabContent"
        NavContent{name: "index"; active: true;
                GetPosts { pageStr: "index" }}
        NavContent{name: "ge";
                GetPosts { pageStr: "ge" }}
        NavContent{name: "osb";
                GetPosts { pageStr: "osb" }}
}
                }

            }
        Block {
            text: '<!--Carousel Wrapper-->
<div id="carousel-example-2" class="carousel slide carousel-fade z-depth-1-half" data-ride="carousel" data-interval="3000">
  <!--Indicators-->
  <ol class="carousel-indicators">
    <li data-target="#carousel-example-2" data-slide-to="0" class="active"></li>
    <li data-target="#carousel-example-2" data-slide-to="1"></li>
    <li data-target="#carousel-example-2" data-slide-to="2"></li>
  </ol>
  <!--/.Indicators-->
  <!--Slides-->
  <div class="carousel-inner" role="listbox">
    <div class="carousel-item active">
      <div class="view">
        <img class="d-block w-100" src="https://mdbootstrap.com/img/Photos/Slides/img%20(105).jpg" alt="First slide">
        <div class="mask rgba-black-light"></div>
      </div>
      <div class="carousel-caption">
        <h3 class="h3-responsive">This is the first title</h3>
        <p>First text</p>
      </div>
    </div>
    <div class="carousel-item">
      <!--Mask color-->
      <div class="view">
        <img class="d-block w-100" src="https://mdbootstrap.com/img/Photos/Slides/img%20(115).jpg" alt="Second slide">
        <div class="mask rgba-black-light"></div>
      </div>
      <div class="carousel-caption">
        <h3 class="h3-responsive">Thir is the second title</h3>
        <p>Secondary text</p>
      </div>
    </div>
    <div class="carousel-item">
      <!--Mask color-->
      <div class="view">
        <img class="d-block w-100" src="https://mdbootstrap.com/img/Photos/Slides/img%20(108).jpg" alt="Third slide">
        <div class="mask rgba-black-light"></div>
      </div>
      <div class="carousel-caption">
        <h3 class="h3-responsive">This is the third title</h3>
        <p>Third text</p>
      </div>
    </div>
  </div>
  <!--/.Slides-->
  <!--Controls-->
  <a class="carousel-control-prev" href="#carousel-example-2" role="button" data-slide="prev">
    <span class="carousel-control-prev-icon" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="carousel-control-next" href="#carousel-example-2" role="button" data-slide="next">
    <span class="carousel-control-next-icon" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
  <!--/.Controls-->
</div>
<!--/.Carousel Wrapper-->'
        }
        }
    }
}
