import java.util.LinkedList;
import java.util.Queue;

public class binaryTree<Key extends Comparable<Key>, Value> {
    private Node root;

    private class Node {
        private Key key;
        private Value value;
        private Node left, right;
        private int N;

        Node(Key key, Value value, int n) {
            this.key = key;
            this.value = value;
            this.N = n;
        }
    }

    public int size() {
        return size(root);
    }

    private int size(Node x) {
        if (x == null) return 0;
        return x.N;
    }

    public Value get(Key key) {
        return get(root, key);
    }

    private Value get(Node x, Key key) {
        if (x == null) return null;
        int cmp = key.compareTo(x.key);
        if (cmp < 0) return get(x.left, key);
        else if (cmp > 0) return get(x.right, key);
        else return x.value;
    }


    public void put(Key key, Value value) {
        root = put(root, key, value);
    }

    private Node put(Node x, Key key, Value value) {
        if (x == null) return new Node(key, value, 1);
        int cmp = key.compareTo(x.key);
        if (cmp < 0) x.left = put(x.left, key, value);
        else if (cmp > 0) x.right = put(x.right, key, value);
        else x.value = value;
        x.N = size(x.left) + size(x.right) + 1;
        return x;
    }

    public Key select(int k) {
        return select(root, k);
    }

    private Key select(Node x, int k) {
        if (x == null) return null;
        int t = size(x.left);
        if (t > k) return select(x.left, k);
        else if (t < k) return select(x.right, k - t - 1);
        else return x.key;
    }

    public int rank(Key key) {
        return rank(root, key);
    }

    private int rank(Node x, Key key) {
        if (x == null) return 0;
        int cmp = key.compareTo(x.key);
        if (cmp < 0) return rank(x.left, key);
        else if (cmp > 0) return 1 + size(x.left) + rank(x.right, key);
        else return size(x.left);
    }

    public void delete(Key key) {
        root = delete(root, key);
    }

    public Key min() {
        return min(root).key;
    }

    private Node min(Node x) {
        if (x.left == null) return x;
        return min(x.left);
    }

    public void deleteMin() {
        root = deleteMin(root);
    }

    private Node deleteMin(Node x) {
        if (x.left == null) return x.right;
        x.left = deleteMin(x.left);
        x.N = size(x.left) + size(x.right) + 1;
        return x;
    }


    private Node delete(Node x, Key key) {
        if (x == null) return null;
        int cmp = key.compareTo(x.key);
        if (cmp < 0) x.left = delete(x.left, key);
        else if (cmp > 0) x.right = delete(x.right, key);
        else {
            if (x.right == null) return x.left;
            if (x.left == null) return x.right;
            Node temp = x;
            x = min(temp.right);
            x.right = deleteMin(temp.right);
            x.left = temp.left;
        }
        x.N = size(x.left) + size(x.right) + 1;
        return x;
    }

    public void preOrderTraversal() {
        preOrderTraversal(root);
    }

    private void preOrderTraversal(Node x) {
        if (x != null) {
            System.out.print(x.value);
            preOrderTraversal(x.left);
            preOrderTraversal(x.right);
        }
    }

    public void inOrderTraversal() {
        inOrderTraversal(root);
    }


    private void inOrderTraversal(Node x) {
        if (x != null) {
            inOrderTraversal(x.left);
            System.out.print(x.value);
            inOrderTraversal(x.right);
        }
    }

    public void postOrderTraversal(){
        postOrderTraversal(root);
    }

    private void postOrderTraversal(Node x){
        if(x!=null){
            postOrderTraversal(x.left);
            postOrderTraversal(x.right);
            System.out.print(x.value);
        }
    }


    public void layerTraversal() {
        layerTraversal(root);
    }


    private void layerTraversal(Node node) {
        Queue<Node> s = new LinkedList<>();
        s.add(node);
        Node curNode;
        Node nextLast = null;
        Node last = node;
        while (!s.isEmpty()) {
            curNode = s.poll();
            System.out.print(curNode.key + " ");
            if (curNode.left != null) {
                nextLast = curNode.left;
                s.add(curNode.left);
            }
            if (curNode.right != null) {
                nextLast = curNode.right;
                s.add(curNode.right);
            }
            if (curNode == last) {
                System.out.println();
                last = nextLast;
            }
        }
    }


}
