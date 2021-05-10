const main = (line) => {
    //O(N) 
    let [A, B] = line.split(" ").map(Number);
    if (A > B) {
        let temp = A;
        A = B;
        B = temp;
    }

    if (A === B || A + Number(1) === B) {
        console.log(0);
        return;
    }

    let answer = "";

    for (let i = 1; i < B - A; i++) {
        answer += `${A + Number(i)} `;
    }

    console.log(String(B - A - Number(1)));
    console.log(answer);
}


main('8 14')