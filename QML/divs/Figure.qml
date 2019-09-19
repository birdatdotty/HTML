import HTML 1.0

El {
    property string position: ""
    typeName: "figure"
    className: "image" + (position ? "-style-align-" + position: "")
    css: "
figure.image {
  display: block;
  text-align: center;
  margin: 5px;
}
figure.image-style-align-right > img
{
  float: right;
  margin: 5px;
}
figure.image-style-align-left > img
{
  float: left;
  margin: 5px;
}
img
{
  border-radius: 15px;
}
"
}
