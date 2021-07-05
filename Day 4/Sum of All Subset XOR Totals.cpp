class Solution {
public:
    vector<vector<int>> subsets;
    void solve(vector<int> nums, vector<int> s)
    {
        if(nums.size()==0)
        {
            subsets.push_back(s);
            return;
        }
        vector<int> s1=s;
        vector<int> s2=s;
        s1.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums, s1);
        solve(nums, s2);
    }
    int cal(vector<int> &x)
    {
        if(x.size()==0) return 0;
        int res=x[0];
        for(int i=1; i<x.size(); i++)
            res=res^x[i];
        return res;
    }
    int sum(vector<vector<int>>&v)
    {
        int sum=0;
        for(auto x:v)
            sum+=cal(x);
        return sum;
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> s;
        solve(nums, s);
        int ans=sum(subsets);
        return ans;
    }
};