public class Sort {

    public void selectSort(int[] arr) {
        int length = arr.length;
        for (int i = 0; i < length; i++) {
            int min = i;
            for (int j = i + 1; j < length; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    public void insertionSort(int[] arr){
        int length= arr.length;
        for(int i =1;i<length;i++){
            for(int j=i;j>0&&(arr[j]<arr[j-1]);j--){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

}
