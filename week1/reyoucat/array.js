// 샘플 배열
const arr = [1, 2, 3, 4, 5]

const insertAt = function (targetArray, value, index) {
    // 입력할 배열, 입력할 내용, 입력할 인덱스 위치
    console.log('짱짱센,,, 인설트엣 친구를 동작합니다...')
    let preArr = []; // 앞 배열
    let postArr = []; // 뒷 배열 
    
    for (let i=0; i < targetArray.length; i++) { // 슬라이스 못쓰니까 열심히 잘라보자. O(n)
        index > i ? 
        preArr[i] = targetArray[i]
        : postArr[i] = targetArray[i] // 가독성 말아먹고
    }    
    // preArr.length; // 앞 배열의 길이가 나올것이다. 끝에다 추가한다. O(1)
    preArr[preArr.length] = value;
    
    
    const loofFunc = function (weight = 0) {
        for (let j=0; j < postArr.length + weight; j++) { // O(n)
            if (postArr[j + index] !== undefined) {
                preArr[j + index + 1] = postArr[j + index]
            }
        }
    }
    // index 0 용
    if (index === 0) {
        loofFunc();
        return preArr;
    } else if(index <= 0) {
        console.error('index에 음수넣지말자..')
        return []
    } else {
        // 리턴용 새 배열
        loofFunc(1);
        return preArr;
    }
    
}

// 삭제할 배열, 삭제할 인덱스 아까랑 비슷하겠지....
const removeAt = function (targetArray, removeIndex) {
    console.log('나약한 .. 리무브엣을 동작합니다..')
    // 리턴내용 그것이 삭제된 새 배열
    let preArr = []; // 앞 배열
    let postArr = []; // 뒷 배열 
    
    for (let i=0; i < targetArray.length; i++) { // 슬라이스 못쓰니까 열심히 잘라보자. O(n)
        // filter 안쓰고 하려니까 매우 어렵구나...
        if (removeIndex > i) {
            preArr[i] = targetArray[i]
        }
        else if (removeIndex < i) {
            postArr[i] = targetArray[i]
        }
    }
    
    for (let point = removeIndex; point < postArr.length; point++) {
        preArr[point] = postArr[point + 1]
    }
    preArr.length = preArr.length - 1

    return preArr;
}

const insertArr = insertAt(arr, 8, 4);
const removeArr = removeAt(arr, 0);
console.log('=======0ㅅ0======\n', insertArr, removeArr);
