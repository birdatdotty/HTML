function makeid(length, word = '')
{
//     https://stackoverflow.com/questions/1349404/generate-random-string-characters-in-javascript#answer-1349426
  var characters       = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
  var charactersLength = characters.length;
  for ( var i = 0; i < length; i++ )
    word += characters.charAt(Math.floor(Math.random() * charactersLength));

  return word;
}
