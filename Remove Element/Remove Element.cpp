class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                v.push_back(nums[i]);
                k++;
            }
                
        }

        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        return k;
    }
};