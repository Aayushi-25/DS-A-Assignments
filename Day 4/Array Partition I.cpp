class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0, i=0;
        for(i=1; i<nums.size(); i+=2)
        {
            sum+=nums[i-1];
        }
        return sum;
    }
};