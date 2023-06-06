class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                v.push_back(nums[i]);
                k++;
            }
        }

        int i=0;
        
        for(;i<v.size();i++){
            nums[i]=v[i];
        }
        
        return k;
    }
};