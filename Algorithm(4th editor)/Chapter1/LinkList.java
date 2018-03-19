
public class LinkList {
    private Node tempNode;
    private Node headNode;
    private Node lastNode;

    public Integer getLength() {
        return length;
    }

    private Integer length;

    public LinkList() {
        this.tempNode = null;
        this.headNode = null;
        this.lastNode = null;
        this.length = 0;
    }

    public boolean empty() {
        return this.length == 0;
    }

    public void append(Object data) {
        tempNode = new Node();
        tempNode.data = data;
        if (this.empty()) {
            headNode = lastNode = tempNode;
        } else {
            lastNode.next = tempNode;
            lastNode = tempNode;
        }
        this.length++;
    }

    public void traversal() {
        tempNode = headNode;
        while (tempNode != null) {
            System.out.println(tempNode.data);
            tempNode = tempNode.next;
        }
    }

    public Node find(Object data) {
        tempNode = headNode;
        while (tempNode != null && tempNode.data != data) {
            tempNode = tempNode.next;
        }
        return tempNode;
    }

    public void deleteNode(Object data) {
        Node NodeToDelete = headNode;
        if (NodeToDelete == null) return;
        if (NodeToDelete.data == data) {
            if (NodeToDelete.next == null) {
                headNode = null;
            } else {
                headNode = NodeToDelete.next;
            }
            length--;
            return;
        }
        while (NodeToDelete.next != null && NodeToDelete.next.data != data) {
            NodeToDelete = NodeToDelete.next;
        }
        if (NodeToDelete.next == null) return;
        if (NodeToDelete.next == lastNode) {
            lastNode = NodeToDelete;
            NodeToDelete.next = null;
            length--;
            return;
        } else {
            tempNode = NodeToDelete.next;
            NodeToDelete.next = NodeToDelete.next.next;
            tempNode = null;
            length--;
            return;
        }

    }
    public void insert(Object data, Node node)
    {
        tempNode = new Node();
        tempNode.data = data;
        tempNode.next = node.next;
        node.next = tempNode;
        if (tempNode.next == null)
            lastNode = tempNode;
        this.length++;
    }

    public void insertHead(Object data)
    {
        tempNode = new Node();
        tempNode.data = data;
        tempNode.next = headNode;
        headNode = tempNode;
        this.length++;
    }


}
