class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mcount=0;
        int lcount=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1 ){
                lcount++;
            }
            else{
                mcount=max(mcount,lcount);
                lcount=0;
            }
        }
        mcount=max(mcount,lcount);
        return mcount;
    }
};