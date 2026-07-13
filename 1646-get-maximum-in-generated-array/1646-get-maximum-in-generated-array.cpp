class Solution {
public:
    int getMaximumGenerated(int n) {
        int m=INT_MIN;
        vector<int> arr;
        for(int i=0; i<=n; i++){
            if(i==0){
                arr.push_back(0);
                m=max(m,0);
            }
            else if(i==1){
                arr.push_back(1);
                m=max(m,1);
            }
            else if(i%2==0){
                arr.push_back(arr[i/2]);
                m=max(m,arr[i/2]);
            }
            else if((i+1)%2 == 0){
                arr.push_back(arr[i/2]+arr[(i+1)/2]);
                m=max(m,arr[i/2]+arr[(i+1)/2]);
            }
       } 
       return m;
    }
};