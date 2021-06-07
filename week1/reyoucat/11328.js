const checkStrfry = function (str) {
  let strArray = str.split(' ')
  // 일치
  if (strArray[0] === strArray[1]) {
    return 'Possible'
  }
  // 길이비교
  if (Array.from(strArray[0]).length !== Array.from(strArray[1]).length) {
    return 'Impossible'
  }

  // 앞뒤
  if (strArray[0] === strArray[1].split('').reverse().join('')) {
    return 'Possible'
  } 
  
  // 랜덤으로 섞어서 도출 가능한가.
  if (Array.from(strArray[0]).sort().join('') === strArray[1].split('').sort().join('')) {
    return 'Possible'
  }

  return 'Impossible'
}


const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let input = [];

rl.on('line', function (line) {
  input.push(line)
})
  .on('close', function () {
    
  for (let i=1; i <= input[0]; i++) {
    console.log(checkStrfry(input[i]))
  }

  process.exit();
});