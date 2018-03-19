public class priorityQueue<Key extends Comparable<Key>> {

    private Key[] heapTree;
    private int N = 0;

    public priorityQueue(int size){
        heapTree=(Key[])new Comparable[size+1];
    }
    public boolean isEmpty(){
        return N==0;
    }
    public int size(){
        return N;
    }
    public void insert(Key v){
        heapTree[++N]=v;
        swim(N);
    }
    public Key deleteMax(){
        Key max = heapTree[1];
        swap(1,N--);
        heapTree[N+1]=null;
        sink(1);
        return max;
    }

    private boolean less(int i,int j){
        return heapTree[i].compareTo(heapTree[j])<0;
    }
    private void swap(int i,int j){
        Key temp=heapTree[i];
        heapTree[i]=heapTree[j];
        heapTree[j]=temp;
    }
    private void  swim (int k){
        while (k>1 && less(k/2,k)){
            swap(k/2,k);
            k=k/2;
        }
    }

    private void sink(int k){
        while (2*k<=N){
            int j = 2*k;
            if(j<N && less(j,j+1)) j++;
            if(!less(k,j)) break;
            swap(k,j);
            k=j;
        }
    }
}
