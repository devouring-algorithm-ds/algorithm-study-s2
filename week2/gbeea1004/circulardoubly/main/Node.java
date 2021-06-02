public class Node<T> {
    private T data;
    private Node<T> pre;
    private Node<T> next;

    public Node(Node<T> pre, T data, Node<T> next) {
        this.pre = pre;
        this.data = data;
        this.next = next;
    }

    public T getData() {
        return data;
    }

    public void setData(T data) {
        this.data = data;
    }

    public Node<T> getPre() {
        return pre;
    }

    public void setPre(Node<T> pre) {
        this.pre = pre;
    }

    public Node<T> getNext() {
        return next;
    }

    public void setNext(Node<T> next) {
        this.next = next;
    }
}