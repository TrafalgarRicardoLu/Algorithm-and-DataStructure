public class StringSort {

    static int R =256;
    public void KeyValueSort(int[] index,String[] strings){
        int[] count = new int[R+1];
        int N = strings.length;
        String[] ans = new String[N];
        for(int i=0;i<N;i++){
            count[index[i]+1]++;
        }
        for(int r=0;r<R;r++){
            count[r+1]+=count[r];
        }
        for(int i=0;i<N;i++)
            ans[count[index[i]]++]=strings[i];
        for(int i=0;i<N;i++){
            System.out.println(ans[i]);
        }
    }

    public void LSDSort(String[] strings,int length){
        int N=strings.length;
        String[] temp = new String[N];
        for(int d= length-1;d>=0;d--){
            int[] count = new int[R+1];

            for(int i=0;i<N;i++)
                count[strings[i].charAt(d)+1]++;
            for(int r=0;r<R;r++)
                count[r+1]+=count[r];
            for(int i=0;i<N;i++) {
                temp[count[strings[i].charAt(d)]++] = strings[i];
            }
            for(int i=0;i<N;i++)
                strings[i]=temp[i];
        }
        for(int i=0;i<N;i++)
            System.out.println(strings[i]);
    }

    private int M=3;
    private String[] aux;
    private int charAt(String s,int index){
        if(index<s.length())
            return s.charAt(index);
        else
            return -1;
    }
    public void MSDSort(String[] strings){
        int N= strings.length;
        aux = new String[N];
        MSDSort(strings,0,N-1,0);

    }
    private void MSDSort(String[] strings,int low,int high,int index){
        if(high<=low){
            return;
        }
        int[] count=new int[R+2];
        for(int i=low;i<=high;i++)
            count[charAt(strings[i],index)+2]++;
        for(int r=0;r<R+1;r++)
            count[r+1]+=count[r];
        for(int i=low;i<=high;i++)
            aux[count[charAt(strings[i],index)+1]++]=strings[i];
        for(int i=low;i<=high;i++)
            strings[i]=aux[i-low];
        for(int r=0;r<R;r++)
            MSDSort(strings,low+count[r],low+count[r+1]-1,index+1);
    }

}
