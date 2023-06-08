class Solution {
public:
    bool isPalindrome(string s) {

        vector<char> v;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                // s[i]+=32;
                v.push_back(s[i]+32);
            }
            else if(s[i]>=97 && s[i]<=122){
                v.push_back(s[i]);
            }
            else if(s[i]>=48 && s[i]<=57){
                v.push_back(s[i]);
            }
        }
        // if(v.size()==1)
        //     return false;
        int st=0, e=v.size()-1;
        while(st<=e){
            if(v[st]==v[e]){
                st++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};