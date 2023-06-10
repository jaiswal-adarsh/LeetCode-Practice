class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int cnt=0,flag=0;
        for(;i>=0;i--){
            if(s[i]==' ' && flag==1)
                break;
            else if(s[i]!=' '){
                flag=1;
                cnt++;
            }

        }

        return cnt;
    }
};