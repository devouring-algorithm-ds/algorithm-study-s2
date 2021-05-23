// 싱글 링크드 리스트 기본 형태
function LinkedList() {
    this.head = null; // { data, next } -> { ???? } 로 이어지는 node 가 들어갈 수 있다.
    this.size = 0; // 사용여부. 0이면 미 사용한 따끈따끈한 친구이다.
}

// 빈 링크드인지 확인용
LinkedList.prototype.isEmpty = function() {
    return this.size == 0 // 안쓴친구면 true 반환
}

// 링크드 리스트 노드 생성용
function LinkedListNode(data) {
    this.data = data; // ⬆ 바로 위에서 받은 데이터지 뭐긴 뭐야ㅎ
    this.next = null; // 처음 생성하거나 신규로 끝에 들어오면 다음은 없다.
}

// 추가 insert
LinkedList.prototype.insert = function (value) {
    if (this.head === null) {
        this.head = new LinkedListNode(value); // 처음이라 헤더가 비어있으면 신규로 { data, next(널) } 친구만 생성
    } else {
        const temp = this.head; // 처음이 아니면 이전에 만든 LinkedListNode 데이터를 옮겨두고
        this.head = new LinkedListNode(value); // 현재 헤드에 신규 생성
        this.head.next = temp; // 임시로 담아두었던 이전에 만든 LinkedListNode를 다음으로 연결.
    }
    this.size++;
}

// 삭제 remove
LinkedList.prototype.remove = function (value) {
    let nowHeadData = this.head; // 일단 현재 헤드 위치 확인 (외부에 둬야함)
    // 즉시 체크해보자.
    if (nowHeadData.data === value) { // 현재 바로 접근되는 데이터를 확인 해보고 방금 입력받은 값이랑 같으면
        // 딱 맞게 지워도 되는 상태인 거니까
        this.head = nowHeadData.next; // 현재 데이터를 다음 데이터로 연결시켜서 날려버림.
        this.size--; // 사용 크기 감소 처리도 해줘야...
    } else { // value를 찾아 떠나는 링크 여행... 링크는 젤다르.ㄹ....
        let prevData = nowHeadData; // 현재 헤드 위치를 임시로 이전 이라 정의한다.
        // 반복해서 value를 찾아 떠나야 함.
    
        while (nowHeadData.next) { // 반복해서? 음... 반복한다는 표현보다 Node 링크의 다음 LinkNode로 간다고 봐야겠다.
            if (nowHeadData.data === value) { // 만약 입력받은 값과 현재 헤드 데이터가 같으면
                // 자. 삭제 로직은 일단 좀 넘기고... 아래 부터 먼저 진행.
                // 아래에서 if 밖에서 순회 하기 위한 상태가 생성이 되면, prevData와 nowHeadData가 서로 다른 상태가 되어있고.
                // 현재의 다음 next 로 걸려있는 데이터를 이전의 next에 걸어주어서 현재 노드의 링크를 날린다.
                prevData.next = nowHeadData.next; // 일단 이전 연결의 다음 연결을, 현재의 다음으로 연결해서 중간에 붕 뜨게 이론적으로 만들고
                // 초기화 해주는 과정이 필요하다.
                prevData = nowHeadData; // 현재 헤드 위치를 아까 임시로 이전에 넣은 곳으로 바꿔주고
                nowHeadData = nowHeadData.next; // 현재 헤더 데이터는 다음 링크로 연결 해준다.
                // 아 처리되었으니 
                break; // 브레이크.
            }
            // (삭제로직 넘기고) 현재 헤드를 이전 데이터로 보내고, 
            prevData = nowHeadData;
            // 현재의 헤드가 가지고 있는 다음 헤드로 넘겨주면 서로 다른 연결이 링크 된다.
            nowHeadData = nowHeadData.next; // 순회 하기 위한 상태 생성.
        }

        // 헤드와 중간에 없는 node 의 경우 tail 이니까 ... 
        if (nowHeadData.data === value) {
            prevData.next = null; // 아 진짜 꼬리처리 빼먹어서 ....
        }

        // 만약 반복하다가 value를 찾으면
        // 삭제를 해야하겠지?
        // 삭제하고나면 사용하고 있는 전체 크기도 줄여줘야한다. 크기 처리해주면 될듯.
        this.size--;
        
    }
}

const ll = new LinkedList();
console.log(ll); // 처음 생성해서 빈 링크드 리스트 구조.
ll.insert(1111);
ll.insert(3);
ll.insert(5);
ll.insert(7);
console.log('-----최종상태----------');
// console.log(ll);
// console.log(ll.head.next);
// console.log(ll.head.next.next);
// console.log(ll.head.next.next.next);
console.log('-----삭제시작----------');
ll.remove(5);
ll.remove(1111);
ll.remove(7);
console.log(ll)