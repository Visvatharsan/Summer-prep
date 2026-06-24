class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> arr;

        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int l=i+1;
            int r= n-1;
            while(l<r){
                if(nums[l]+nums[r]+nums[i] == 0){
                    arr.push_back({nums[l],nums[r],nums[i]});
                    l++;
                    r--;

                    while(l<r && nums[l]==nums[l-1]){
                        l++;
                    }
                    while(l<r && nums[r]==nums[r+1]){
                        r--;
                    }
                }
                else if(nums[l]+nums[r]+nums[i] < 0){
                    l++;
                }
                else if(nums[l]+nums[r]+nums[i] > 0){
                    r--;
                }
            }
        }
        return arr;
    }
};