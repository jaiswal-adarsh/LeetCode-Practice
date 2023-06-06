class Solution {
public:
    bool isPalindrome(int x) {
        int rem,tmp=x;
        long long int sum=0;
        while(x>0){
            rem=x%10;
            sum=(sum*10)+rem;
            x/=10;
        }
        if(tmp==sum)
            return true;
        else
            return false;
    }
};