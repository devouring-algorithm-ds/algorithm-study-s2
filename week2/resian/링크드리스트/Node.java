package 링크드리스트;

public class Node<T> {
    T data;
    Node previousNode;
    Node nextNode;

    public void add(T data, Node previousNode, Node nextNode) {
        this.data = data;
        initializePreviousNode(previousNode);
        initializeNextNode(nextNode);
    }

    private void initializePreviousNode(Node previousNode) {
        if(previousNode != null) {
            this.previousNode = previousNode;
        }
        this.previousNode = this;
    }

    private void initializeNextNode(Node nextNode) {
        if(nextNode != null) {
            this.nextNode = nextNode;
        }
        this.nextNode = this;
    }

    public void updateNode() {
        previousNode.setNextNode(this);
        nextNode.setPreviousNode(this);
    }

    public T getData() {
        return data;
    }

    public Node getPreviousNode() {
        return previousNode;
    }

    public Node getNextNode() {
        return nextNode;
    }

    public void setPreviousNode(Node previousNode) {
        this.previousNode = previousNode;
    }

    public void setNextNode(Node nextNode) {
        this.nextNode = nextNode;
    }
}