class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }
        int globalsum=nums[0];
        int localsum=nums[0];
        for(int i=1; i<nums.size(); i++){
            localsum  = max(nums[i], localsum+ nums[i]);
            globalsum=max(globalsum,localsum);
        }
        return globalsum;

    }
};