class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int mc=INT_MAX;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            while(sum>=target){
                mc=min(mc,i-left+1);
                sum-=nums[left++];
            }
        }
        if(mc>nums.size()){
            return 0;
        }
        return mc;
    }
};