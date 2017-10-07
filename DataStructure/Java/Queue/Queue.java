public class Queue {

    private Integer QueueLength;
    private Node frontNode;
    private Node tempNode;
    private Node rearNode;

    public Queue() {
        this.QueueLength = 0;
        this.frontNode = null;
        this.tempNode = null;
        this.rearNode = null;
    }

    public boolean empty(){
        return this.QueueLength==0;
    }

    public Integer length(){
        return this.QueueLength;
    }

    public void enQueue(Object data)
    {
        tempNode = new Node();
        tempNode.data = data;
        if (this.empty()) {
        rearNode = frontNode = tempNode;
    }
	else {
        rearNode.next = tempNode;
        rearNode = tempNode;
    }
        this.QueueLength++;
    }

    public void deQueue()
    {
        if (this.empty())return;
        if (rearNode == frontNode) {
            rearNode = frontNode = null;
            this.QueueLength--;
            return;
        }
        tempNode = frontNode;
        frontNode = frontNode.next;
        tempNode = null;
        this.QueueLength--;
    }

    public Object front(){
        return frontNode.data;
    }


}
