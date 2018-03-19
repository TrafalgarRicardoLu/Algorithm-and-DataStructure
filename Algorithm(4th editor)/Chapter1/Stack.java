public class Stack {
    private Integer StackLength;
    private Node tempNode;
    private Node topNode;

    public Stack() {
        this.StackLength = 0;
        this.tempNode = null;
        this.topNode = null;
    }

    public boolean empty(){
        return  StackLength==0;
    }

    public Integer length(){
        return this.StackLength;
    }

    public Object top(){
        return topNode.data;
    }

    public void pop(){
        if (this.empty())return;
        if (topNode.next == null) {
            topNode = null;
            StackLength--;
            return;
        }
        tempNode = topNode;
        topNode = topNode.next;
        StackLength--;
    }

    public void push(Object data)
    {
        tempNode = new Node();
        tempNode.data = data;
        if (this.empty()) {
        topNode = tempNode;
        StackLength++;
        return;
    }
        tempNode.next = topNode;
        topNode = tempNode;
        StackLength++;
    }





}
