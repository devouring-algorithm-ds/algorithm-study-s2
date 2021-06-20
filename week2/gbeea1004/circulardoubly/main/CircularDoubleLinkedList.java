public interface CircularDoubleLinkedList<T> {
    void insertAfter(T target, T data);

    void removeAfter(T target);

    boolean isExist(T data);

    void print();
}