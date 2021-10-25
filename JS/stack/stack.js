var letter = [];
var word = "121";
var rword = "";

for (var i = 0; i < word.length; i++) {
    letter.push(word[i]);
}
for (var i = 0; i < word.length; i++) {
    rword += letter.pop();
}
if (rword === word) {
    console.log(word, "is a plaindrome");
} else {
    console.log(word, "is not plaindrome");
}