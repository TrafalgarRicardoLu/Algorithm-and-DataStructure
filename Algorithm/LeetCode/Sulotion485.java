import org.junit.Test;

public class Sulotion485 {

    @Test
    public void test(){
        System.out.println(findMaxConsecutiveOnes(new int[]{0}));
    }
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int max=0;
        for(int i:nums){
            if(count+i != count){
                max=Math.max(max,++count);
            }else{
                count=0;
            }
        }
        return max;
    }
}
