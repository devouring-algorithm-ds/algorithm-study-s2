function s(N, K, S) {
    let array = S.split('');
    // O(N)
    let answer = array.map((cur, index) => {
        if (index + 1 === K) {
            return cur.toLowerCase();
        } else {
            return cur;
        }
    });


    console.log(answer);
}

s(4, 3, 'CABA');