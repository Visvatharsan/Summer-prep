class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x!=0){
            int digit = x%10;

            if((y>INT_MAX/10 || y<INT_MIN/10)){
                return 0;
            }

            x/=10;
            y=y*10+digit;
        }
        return y;
    }
};