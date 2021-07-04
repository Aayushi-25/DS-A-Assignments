class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> target;
        int i=0;
        for(auto x: index)
        {
            target.insert(target.begin()+x,nums[i++]);
        }
        return target;
    }
};