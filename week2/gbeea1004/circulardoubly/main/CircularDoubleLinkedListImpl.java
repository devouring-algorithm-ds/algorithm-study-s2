public class CircularDoubleLinkedListImpl<T> implements CircularDoubleLinkedList<T> {
    private Node<T> last; // 마지막 위치의 노드
    private int size; // 노드 크기

    public CircularDoubleLinkedListImpl() {
        last = null;
        size = 0;
    }

    @Override
    public void insertAfter(T target, T data) {
        Node newNode = new Node(null, data, null);

        if (isEmpty()) { // 리스트에 노드가 없다면
            last = newNode;
            newNode.setPre(newNode);
            newNode.setNext(newNode);
            size++;
        } else { // 리스트에 노드가 존재한다면
            if (isExist(target)) {
                Node<T> node = findNode(target);
                node.getNext().setPre(newNode);
                newNode.setNext(node.getNext());
                node.setNext(newNode);
                newNode.setPre(node);
                size++;
            } else {
                throw new CircularDoubleLinkedListException("target 을 찾지 못했습니다 : " + target);
            }
        }
    }

    @Override
    public void removeAfter(T target) {
        if (isEmpty()) {
            throw new CircularDoubleLinkedListException("리스트가 비어있습니다.");
        }

        if (isExist(target)) {
            Node<T> findNode = findNode(target);
            Node<T> nextNode = findNode.getNext();
            if (nextNode == last) { // 삭제하는 노드가 마지막 노드 일 경우
                last = nextNode.getNext();
            }
            nextNode.getNext().setPre(findNode);
            findNode.setNext(nextNode.getNext());
            nextNode.setPre(null);
            nextNode.setNext(null);
            size--;
        } else {
            throw new CircularDoubleLinkedListException(target + "이(가) 리스트에 없습니다.");
        }
    }

    @Override
    public boolean isExist(T data) {
        Node<T> node = last;
        for (int i = 0; i < size; i++) {
            if (data == node.getData()) {
                return true;
            }
            node = node.getNext();
        }
        return false;
    }

    @Override
    public void print() {
        Node<T> node = last;
        for (int i = 0; i < size; i++) {
            System.out.println(node.getData());
            node = node.getNext();
        }
    }

    private Node<T> findNode(T target) {
        Node<T> node = last;
        for (int i = 0; i < size; i++) {
            if (target == node.getData()) {
                return node;
            }
            node = node.getNext();
        }
        return node;
    }

    public Node<T> getLast() {
        return last;
    }

    public int getSize() {
        return size;
    }

    public boolean isEmpty() {
        return size == 0;
    }
}