class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;

        for(int i=0; i<score.size(); i++){
            pq.push({score[i],i});
        }

        vector<string> arr(score.size());

        int k=0;
        while(!pq.empty()){
            if(k==0){
                arr[pq.top().second]="Gold Medal";
                k++;
                pq.pop();
            }
            else if(k==1){
                arr[pq.top().second]="Silver Medal";
                k++;
                pq.pop();
            }
            else if(k==2){
                arr[pq.top().second]="Bronze Medal";
                k++;
                pq.pop();
            }
            else{
                arr[pq.top().second]=to_string(k+1);
                k++;
                pq.pop();
            }
        }
        return arr;
    }
};