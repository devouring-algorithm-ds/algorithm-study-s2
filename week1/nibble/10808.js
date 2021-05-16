let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('');

//O(N)
let answer = new Array(26).fill(0);

//첫번째 방법
let map = input.map((char) => char.charCodeAt(0) - 97);

for (let i = 0; i < map.length; i++) {
    answer[map[i]]++
}

//두번째 방법
const alphabet = "abcdefghijklmnopqrstuvwxyz";
input.forEach(i => answer[alphabet.indexOf(i)]++);


console.log(answer.join(" "));