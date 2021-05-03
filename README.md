# 씹어먹는 알고리즘 & 자료구조

> 스터디 관련해서 너무나도 좋은 [포스트](https://gmlwjd9405.github.io/2018/05/14/how-to-study-algorithms.html)가 있어서 참고했습니다.


<details>
<summary><b>정기모임 일정/규칙</b></summary>
<ul>
    <li><b>모임 일정</b></li>
    <ul>
        <li>매주 월요일 오후 9시(JST) @ Discord</li>
    </ul>
    <li><b>모임 규칙</b></li>
    <ul>
        <li><b>개인</b></li>
        <ul>
            <li>공통 주제에 대한 내용을 공부하고 정리한다 (각자 방식에 따라서 정리).</li>
            <li>주제와 관련된 동일한 <a href="https://www.acmicpc.net">알고리즘 문제</a>를 풀고 github에 공유한다.</li>
            <li>정해진 조원의 코드에 대한 피드백을 주석으로 달아 github에 올린다.</li>
            <ul>
                <li> <a href="https://search.naver.com/search.naver?sm=tab_hty.top&where=nexearch&query=사다리타기&oquery=사다리타&tqi=h4%2Bo7sprvTossAlz%2FXossssssgd-442946">사다리타기</a>로 페어를 랜덤으로 결정.</li>
            </ul>
            <li>자신의 코드에 대한 피드백을 확인하고 수정하여 github에 올린다.</li>
        </ul>
        <li><b>스터디</b></li>
        <ul>
            <li>공통 주제 정리한 내용 간단히 공유.</li>
            <li>문제 풀이 피드백</li>
            <ul>
                <li>왜 이런 피드백을 주었는지 또는 받았는지 궁금하거나,</li>
                <li>어떤 피드백을 받았고 어떻게 수정했는지 공유</li>
            </ul>
            <li>해당 알고리즘 문제를 푸는 좋은 방법에 대해 공유</li>
        </ul>
    </ul>
</ul>
</details>

<details>
<summary> <b>공부법</b> </summary>
<ol>
    <li>공통 주제를 공부하고 이해한다.</li>
    <li>주제와 관련된 알고리즘 문제를 풀어본다.</li>
    <ul>
        <li>한 시간 정도 고민해보고 모르겠으면 포기한다.</li>
        <li>다른 사람의 풀이를 보고 이해한다.</li>
    </ul>
    <li>1,2번에서 이해가 잘 가지 않는 부분이 있으면 질문한다.</li>
    <ul>
        <li>디스코드 질문방에 질문을 한다.</li>
        <li>이런 사소한 질문도 해도되나 싶은것도 질문한다.</li>
        <li>다른 사람들도 참고 할 수 있도록 질문은 삭제하지 않는다.</li>
    </ul>
    <li> 1,2,3번 후에 다시 문제를 풀어본다.</li>
    <ul>
        <li>그래도 모르겠으면 1번부터 반복한다.</li>
        <li>그래도 안되면 놀거나, 쉬거나, 산책을 가거나 한 다음, 다른 문제를 풀어본다.</li>
    </ul>
</ol>

**Tip**
- 충분히 고민해보고 노력해보고 나서 포기하는 것이 중요하다. 한-두 시간 정도 고민해도 모르겠으면 풀이를 참고한다.
- 풀이를 참고해서 푼 문제도 본인이 해결했다고 생각한다.
- 프로그래밍을 많이 하는 것도 중요하지만 생각을 많이 하는 것이 중요하다.
- 자신의 풀이에 대한 회고와 더 좋은 풀이 방법을 찾는 것이 중요하다.
</details>

## 시작하기

1-1. 리포지토리 클론 후 스터디 회차로 브랜치 이동:
```zsh
$ git clone git@github.com:devouring-algorithm-ds/algorithm-study-s2.git
$ cd algorithm-study-s2
$ git checkout s2/week0c
```

1-2. 이미 클론을 한 경우 브랜치 fetch하고 해당 브랜치로 이동.
```zsh
$ git fetch && git checkout s2/week0
```
 
2. `s2/week0` 브랜치 이동 후, 해당 회차의 디렉토리로 이동.
```zsh
$ cd week0 
```

3. 본인 이름의 디렉토리를 생성.
```zsh
$ mkdir eubug
```

## 파일 생성 규칙 ????
- 자료구조 구현의 경우, 해당 자료구조 이름의 디렉토리를 생성 한 후 진행.
```zsh
$ cd eubug
$ mkdir stack
$ cd stack
$ touch main.cpp stack.{h,cpp} # 등등... 
```
- 문제풀이의 경우 문제 번호를 이름으로 생성하고 진행.
```zsh
$ cd eubug
$ touch 2557.cpp ## 각자 사용하는 언어로 진행해주세요.
```
