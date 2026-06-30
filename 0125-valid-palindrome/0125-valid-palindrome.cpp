class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(char c : s){
            if(isalnum(c)){
                filtered+=tolower(c);
            }
        }
        string rev =filtered;
        reverse(filtered.begin(), filtered.end());
        if(filtered == rev){
            return true;
        }
        else{
            return false;
        }
    }
};