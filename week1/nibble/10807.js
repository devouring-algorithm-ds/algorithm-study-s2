let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

let array = input[1].split(" ");
let findNumber = Number(input[2]);
let answer = 0;

array.forEach((cur) => {
    if (Number(cur) === findNumber) {
        answer++;
    }
});
console.log(answer);