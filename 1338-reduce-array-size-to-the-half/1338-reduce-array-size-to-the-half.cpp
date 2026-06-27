class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> counts;

        sort(arr.begin(), arr.end());

        int count=0;
        for(int i=0 ;i<arr.size()-1; i++){
            count+=1;
            if(arr[i+1] != arr[i]){
                counts.push_back(count);
                count=0;
            }
            else if(arr[i+1] == arr[i] && i+1 == arr.size()-1){
                counts.push_back(count+1);
            }
            else if(arr[i+1] != arr[i] && i+1 != arr.size()-1){
                counts.push_back(count);
                counts.push_back(1);
            }
        }

        sort(counts.begin(), counts.end());
        count=0;
        int ssize=0;
        for(int i=counts.size()-1; i>0; i--){
            count+=counts[i];
            ssize+=1;
            if(arr.size()-count <= arr.size()/2){
                return ssize;
            }
        }
        return 1;
    }
};