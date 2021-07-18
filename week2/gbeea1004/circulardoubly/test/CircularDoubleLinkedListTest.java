class CircularDoubleLinkedListTest {
    private CircularDoubleLinkedList circularDoubleLinkedList;

    @BeforeEach
    void setUp() {
        circularDoubleLinkedList = new CircularDoubleLinkedListImpl();
    }

    @Test
    void 원소추가() {
        circularDoubleLinkedList.insertAfter(null, "사과");
        assertThat(circularDoubleLinkedList.isExist("사과")).isTrue();
        assertThat(circularDoubleLinkedList.isExist("배")).isFalse();

        circularDoubleLinkedList.insertAfter("사과", "참치");
        circularDoubleLinkedList.insertAfter("사과", "수박");
        circularDoubleLinkedList.print();
    }

    @Test
    void 비어있는리스트_원소제거() {
        assertThrows(CircularDoubleLinkedListException.class, () -> circularDoubleLinkedList.removeAfter("사과"));
    }

    @Test
    void 존재하지않는_target_원소제거() {
        // given
        circularDoubleLinkedList.insertAfter(null, "사과");
        circularDoubleLinkedList.insertAfter("사과", "배");
        circularDoubleLinkedList.insertAfter("배", "수박");

        // when
        assertThrows(CircularDoubleLinkedListException.class, () -> circularDoubleLinkedList.removeAfter("딸기"));

        // then
        circularDoubleLinkedList.print();
    }

    @Test
    void 존재하는_target_원소제거() {
        // given
        circularDoubleLinkedList.insertAfter(null, "사과");
        circularDoubleLinkedList.insertAfter("사과", "배");
        circularDoubleLinkedList.insertAfter("배", "수박");

        // when
        circularDoubleLinkedList.removeAfter("사과");

        // then
        circularDoubleLinkedList.print();
    }
}