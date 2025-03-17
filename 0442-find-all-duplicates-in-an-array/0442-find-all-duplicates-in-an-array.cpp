class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        for(int i=1;i<n;i++)if(nums[i-1]==nums[i])ans.push_back(nums[i]);
        return ans;
    }
};