class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum = 0, sum;
        for(auto i :accounts){
            sum = 0;
            for(auto j : i)
                sum +=j;
            maximum = max(sum,maximum);
        }
        return maximum;
    }
};