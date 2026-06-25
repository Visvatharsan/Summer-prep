class Solution {
public:
    int fib(int n) {
        int x=0;
        if(n==0){
            return x;
        }
        int y=1;
        for(int i=1; i<n; i++){
            int temp=y;
            y=x+y;
            x=temp;
        }
        return y;
    }
};