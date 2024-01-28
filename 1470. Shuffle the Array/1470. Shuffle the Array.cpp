class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int s=0,e=n;
        while(s<n && e<2*n){
            ans.push_back(nums[s++]);
            ans.push_back(nums[e++]);
        }
        return ans;
    }
};