class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> om;
        for(char i : s){
            om[i]++;
        }

        for(char i : t){
            if(om.count(i)==0){
                return false;
            }
            else{
                om[i]--;
            }
        }

        for(auto i : om){
            if(i.second > 0 || i.second!=0){
                return false;
            }
        }
        return true;
    }
};