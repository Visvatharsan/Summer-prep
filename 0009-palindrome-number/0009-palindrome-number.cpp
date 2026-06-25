class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int y = x;
        int pal=0;
        while(x>0){
            int digit = x%10;
            if(pal>INT_MAX/10){
                return false;
            }

            pal= pal*10+digit;
            x/=10;
        }

        if(y==pal){
            return true;
        }
        else{
            return false;
        }
        
    }
};
