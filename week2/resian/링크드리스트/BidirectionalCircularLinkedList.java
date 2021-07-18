package 링크드리스트;

public class BidirectionalCircularLinkedList<T> {
    Node heda;
    Node tail;

    int count;

    public void add(T data) {
        Node createNode = new Node();
        if (heda == null) {
            firstNode(data, createNode);
        } else {
            nextAddNode(data, createNode);
        }
    }

    /**
     * 이전 노드를 받아온다.
     * @param node
     * @param data
     */
    private void add(Node node, T data) {
        Node createNode = new Node();
        Node originNextNode = node.getNextNode();
        createNode.add(data, node, originNextNode);
        createNode.updateNode();
        count++;
    }

    private Node firstNode(T data, Node node) {
        node.add(data, null, null);
        this.heda = node;
        this.tail = node;
        count++;
        return node;
    }

    private Node nextAddNode(T data, Node node) {
        node.add(data, heda, null);
        this.tail = node;
        count++;
        return node;
    }

    public void delete(Node node) {
        node.getPreviousNode().setNextNode(node.nextNode);
        node = null;
    }

}
