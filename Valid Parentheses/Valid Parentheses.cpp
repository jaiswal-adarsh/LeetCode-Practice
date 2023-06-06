class Solution {
public:
    bool isValid(string x) {
         stack<char> s;
        int n=x.size();
        for(int i=0;i<n;i++)
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
                s.push(x[i]);
            else if( !s.empty() && ((x[i]==')'&&s.top()=='(')
                     || (x[i]=='}'&&s.top()=='{') 
                     || (x[i]==']'&&s.top()=='[')))
                         s.pop();
            else return false;
        if(s.size()==0) return true;
        return false; 
        
    }
};