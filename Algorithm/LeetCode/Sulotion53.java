public class Sulotion53 {
    public static void main(String[] args) {
        int[] arr = new int[]{-2,1};
        System.out.println(maxSubArray(arr));
    }

    public static int maxSubArray(int[] nums) {
        int maxsum, maxhere;
        maxsum = maxhere = nums[0];
        for (int i=1; i<nums.length; i++) {
            if (maxhere <= 0)
                maxhere = nums[i];
            else
                maxhere += nums[i];
            if (maxhere > maxsum) {
                maxsum = maxhere;
            }
        }
        return maxsum;


    }
}
