class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[x-1]){
                swap(nums[i], nums[x]);
                x++;
            }
        }
        return x;
    }
};