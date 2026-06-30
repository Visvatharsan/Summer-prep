class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> arr;
        string x;
        while(ss>>x){
            arr.push_back(x);
        }

        int max=0;
        return arr[(arr.size()-1)].size();

    }
};