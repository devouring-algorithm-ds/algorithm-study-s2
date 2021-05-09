function s(total, limit, numbers) {
    // solved for
    for (let i = 0; i <= total; i++) {
        if (numbers[i] < limit) {
            answer += numbers[i] + '';
        }
    }

    // solved forEach
    numbers.forEach((num) => {
        if (num < limit) {
            answer += num + ' ';
        }
    })

    // solved filter
    const answer = numbers.filter(num => num < limit);

    console.log(answer.join(' '));
}

s(10, 5, [1, 10, 4, 9, 2, 3, 8, 5, 7, 6]);