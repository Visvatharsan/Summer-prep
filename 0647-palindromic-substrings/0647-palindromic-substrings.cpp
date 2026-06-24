class Solution {
public:
    int countSubstrings(string s) {
        int p1=0;
        int p2=0;
        int count=0;
        while(p1<s.length()){
            string str = s.substr(p1,p2-p1+1);
            string rev = str;
            reverse(str.begin(),str.end());
            if(str == rev){
                count++;
            }
            if(p2==s.length()-1){
                p1+=1;
                p2=p1;
            }
            else{
                p2+=1;
            }
        }
        return count;
    }
};