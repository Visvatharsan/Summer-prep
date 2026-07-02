class Solution {
public:


    int maxVowels(string s, int k) {
        int mx=0;
        set<char>  st= {'a','e','i','o','u'};
        for(int i=0; i<k; i++){
            if(st.count(s[i])>0){
                mx+=1;
            }
        }

        int count =mx;
        for(int i=k; i<s.size(); i++){
            if(st.count(s[i-k])>0){
                count--;
            }
            if(st.count(s[i])>0){
                count++;
            }
            mx = max(count,mx);
        }

        return mx;
    }
};