class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(char i: s){
            if(isalnum(i)){
                filtered+=tolower(i);
            }
        }

        string x=filtered;
        reverse(x.begin(),x.end());
        return (x==filtered? true:false);
    }
};