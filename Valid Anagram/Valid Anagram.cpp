class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m1;
        map<char,int>m2;
        if(s.size()!=t.size())
            return false;
        for(int i=0,j=0;i<s.size(),j<t.size();i++,j++){
            m1[s[i]]++;
            m2[t[j]]++;
        }
        for(int i=0;i<m1.size();i++){
            if(m1[i]!=m2[i]){
                return false;
            }
        }
        return true;
    }
};