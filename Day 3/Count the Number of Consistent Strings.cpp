class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0, flag=1;
        unordered_set <char>s1 ( begin(allowed) , end(allowed) );
        for(auto x:words)
        {
            flag=1;
            set <char>s ( begin(x) , end(x) );
            for(auto k:s)
            {
                if(s1.find(k)==s1.end())
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1) c++;
        }
        return c;
    }
};