class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        if(nums[n-1] != n){
            return n;
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1] != nums[i]+1){
                return nums[i]+1;
            }
        }
        return 0;
    }
};