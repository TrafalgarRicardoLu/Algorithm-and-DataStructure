public class Sulotion283 {

    public static void main(String[] args) {
        int[] nums = new int[]{0,1,2,3,4,0,5};
        moveZeroes(nums);
    }

    public static void moveZeroes(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                count++;
                continue;
            } else {
                nums[i - count] = nums[i];
            }
        }
        for(int i=nums.length-count;i<nums.length;i++){
            nums[i]=0;
        }
        for(int i:nums){
            System.out.println(i);
        }
    }

}
