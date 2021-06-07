const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let input = [];

const countNumber = function (numArrlen, targetArr, searchNum) {
  let count = 0;
  let distArray = targetArr.split(' ');

  distArray.forEach(e => {  // O(n)
    e === searchNum ? count++ : null  
  });
  
  console.log(count);
}

rl.on('line', function (line) {
  input.push(line)
})
  .on('close', function () {
    
    countNumber(input[0], input[1], input[2])
  
  process.exit();
});