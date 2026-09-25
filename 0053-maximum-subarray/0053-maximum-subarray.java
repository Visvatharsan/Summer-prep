class Solution {
    public int maxSubArray(int[] nums) {
        int i = 0;
        int j = 0;
        int sum =0;
        int ans = Integer.MIN_VALUE;
        while (j<nums.length && i < nums.length){
            while (sum<0){
                sum -=nums[i];
                i++;
            }
            sum+=nums[j];
            ans = Math.max(ans, sum);
            j++;
        }


        return ans;
    }
}