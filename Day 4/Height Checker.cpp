class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp=heights;
        sort(exp.begin(), exp.end());
        int c=0, i=0;
        for(auto h:heights)
        {
            if(exp[i++]!=h)
                c++;
        }
        return c;
    }
};