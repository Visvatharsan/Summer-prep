class Solution {
public:
    int minimumChairs(string s) {
        int chairs=0;
        int people =0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'E'){
                people++;
                if(people>chairs){
                    chairs++;
                }
            }
            if(s[i] == 'L'){
                people--;
            }
        }

        return chairs;
    }
};