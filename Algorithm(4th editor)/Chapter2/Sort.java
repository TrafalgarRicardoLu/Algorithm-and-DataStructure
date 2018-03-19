public class Sort {

    private static boolean less(Comparable a, Comparable b) {
        return a.compareTo(b) < 0;
    }

    private static void swap(Comparable[] arr, int a, int b) {
        Comparable temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    private static void sink(Comparable[] arr,int k,int N){
        while (2*k <= N){
            int j = 2*k;
            if(j<N && less(arr[j],arr[j+1])) j++;
            if(!less(arr[k],arr[j])) break;
            swap(arr,k,j);
            k=j;
        }
    }

    public void selectSort(Comparable[] arr) {
        int length = arr.length;
        for (int i = 0; i < length; i++) {
            int min = i;
            for (int j = i + 1; j < length; j++) {
                if (less(arr[j], arr[min])) {
                    min = j;
                }
            }
            Comparable temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    public void insertionSort(Comparable[] arr) {
        int length = arr.length;
        for (int i = 1; i < length; i++) {
            for (int j = i; j > 0 && less(arr[j], arr[j - 1]); j--) {
                Comparable temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }


    //mergeSort
    private static Comparable[] arrTemp;

    private static void merge(Comparable[] arr, int low, int mid, int high) {
        int i = low, j = mid + 1;
        for (int k = low; k <= high; k++)
            arrTemp[k] = arr[k];
        for (int k = low; k <= high; k++) {
            if (i > mid) arr[k] = arrTemp[j++];
            else if (j > high) arr[k] = arrTemp[i++];
            else if (less(arrTemp[j], arrTemp[i])) arr[k] = arrTemp[j++];
            else arr[k] = arrTemp[i++];
        }
    }

    public void mergeSort(Comparable[] arr) {
        arrTemp = new Comparable[arr.length];
        mergeSortUpToBottom(arr, 0, arr.length - 1);
    }

    private static void mergeSortUpToBottom(Comparable[] arr, int low, int high) {
        if (high <= low) return;
        int mid = low + (high - low) / 2;
        mergeSortUpToBottom(arr, low, mid);
        mergeSortUpToBottom(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    public static void mergeSortBottomToUp(Comparable[] arr) {
        int N = arr.length;
        arrTemp = new Comparable[N];
        for (int size = 1; size < N; size = size + size)
            for (int low = 0; low < N - size; low += size + size)
                merge(arr, low, low + size + 1, Math.min(low + size + size - 1, N - 1));
    }

    //quickSort

    private static int partition(Comparable[] arr, int low, int high) {
        int i = low, j = high + 1;
        Comparable v = arr[low];
        while (true) {
            while (less(arr[++i], v)) if (i == high) break;
            while (less(v, arr[--j])) if (j == low) break;
            if (i >= j) break;
            swap(arr, i, j);
        }
        swap(arr, low, j);
        return j;
    }

    public void quickSort(Comparable[] arr) {
        quickSort(arr, 0, arr.length - 1);
    }

    private static void quickSort(Comparable[] arr, int low, int high) {
        if (high <= low) return;
        int j = partition(arr, low, high);
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }

    private static void quickThreeWay(Comparable[] arr, int low, int high) {
        if (high <= low) return;
        int lt = low, i = low + 1, gt = high;
        Comparable v = arr[low];
        while (i <= gt) {
            int cmp = arr[i].compareTo(v);
            if (cmp < 0) swap(arr, lt++, i++);
            else if (cmp > 0) swap(arr, i, gt--);
            else i++;
        }
        quickThreeWay(arr, low, lt - 1);
        quickThreeWay(arr, gt + 1, high);
    }

    //heapSort
    public static void heapSort(Comparable[] arr){
        int N=arr.length-1;
        for(int k=N/2;k>=0;k--)
            sink(arr,k,N);
        while (N>=0){
            swap(arr,0,N--);
            sink(arr,0,N);
        }
    }
}

