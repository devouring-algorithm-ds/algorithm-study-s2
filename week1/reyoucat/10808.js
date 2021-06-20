const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', function(line) {
    // 문자열 자름
    const charArr = line.split('');
    const array = new Array(26).fill(0);
    charArr.forEach((item) => { // O(n)
        const codeToIdx = item.charCodeAt() - 97; 
        array[codeToIdx] = array[codeToIdx] + 1;
    });
    
    console.log(array.join(' '));

  rl.close();
}).on("close", function() {
  process.exit();
});