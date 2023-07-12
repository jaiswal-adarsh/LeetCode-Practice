class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,mid=0,u=nums.size()-1;
         while(mid<=u){
             if(nums[mid]==1){
                 mid++;
             }
             else if(nums[mid]==0){
                 swap(nums[mid],nums[l]);
                 mid++;
                 l++;
             }
             else{
                 swap(nums[mid],nums[u]);
                 u--;
             }
         }
        
    }
};