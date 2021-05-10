const main = (line) => {
    //O(N) 
    let [A, B, C] = line.split("\n").map(Number);

    const sum = String(A * B * C);

    let answer = new Array(10).fill(0);

    for (let i = 0; i < 10; i++) {
        answer[Number(sum[i])] += 1;
    }


    answer.forEach((cur) => console.log(cur));
}

main('150\n266\n427');