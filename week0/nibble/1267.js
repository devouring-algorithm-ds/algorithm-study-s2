function s(input) {
    //O(N) 
    let inputs = input.toString().trim().split('\n');
    let cnt = Number(inputs[0]);
    let times = inputs[1].split(' ');

    let ycall = 0;
    let mcall = 0;
    for (let i = 0; i < cnt; i++) {
        ycall += Math.ceil(Number(times[i]) / 30) * 10;
        mcall += Math.ceil(Number(times[i]) / 60) * 15;
    }

    if (ycall > mcall) {
        console.log("M " + String(mcall))
    } else if (ycall < mcall) {
        console.log('Y ' + String(ycall));
    } else {
        console.log("Y M " + String(mcall));
    }


};


s('3\n61 62 63');