function s(input) {
    // O(N²)
    let sum = input.reduce((a, b) => a + b)
    let xman = [];

    for (let i = 0; i < input.length; i++) {
        for (let j = i + 1; j < input.length; j++) {
            if (sum - (input[i] + input[j]) === 100) {
                xman.push(...[input[i], input[j]]);
                console.log(xman);
            }
        }
    }

    input.sort((a, b) => a - b).forEach(num => {
        if (!(num == xman[0] || num == xman[1])) console.log(num);
    });
};


s([20, 7, 23, 19, 10, 15, 25, 8, 13]);