import HTML 1.0

Block {
  property string share: 'collections,vkontakte,facebook,odnoklassniki,moimir'
  text: '<script src="https://yastatic.net/es5-shims/0.0.2/es5-shims.min.js"></script><script src="https://yastatic.net/share2/share.js"></script><div class="ya-share2" data-services="' + share + '"></div>'
}
