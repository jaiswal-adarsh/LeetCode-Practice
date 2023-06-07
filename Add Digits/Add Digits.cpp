class Solution {
public:
int add(int x){
    int sum=0,rem=0;
    while(x>0){
        rem=x%10;
        sum+=rem;
        x/=10;
    }
    return sum;

}
    int addDigits(int num) {
        if(num<10)
            return num;
        while (num>=10){
            num=add(num);
        }
        return num;
    }
};