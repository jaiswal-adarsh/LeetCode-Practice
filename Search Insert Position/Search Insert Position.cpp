class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,flag=0;
        for( ;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]<target && i!=(nums.size()-1) && nums[i+1]>target){
                flag=1;
                break;
            }
            else if(nums[i]>target){
                return i;
            }
                
        }
        if(flag==1)
            return i+1;
        else
            return i;
    }
};