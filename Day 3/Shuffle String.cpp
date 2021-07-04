class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s1=s;
        int i=0;
        for(auto x:indices)
        {
            s1[x]=s[i];
            i++;
        }
        return s1;
    }
};