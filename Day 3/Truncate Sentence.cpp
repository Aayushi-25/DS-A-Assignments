class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string temp;
        vector<string> r;
        while(ss>>temp) r.push_back(temp);
        string result="";
        int i=0;
        while(k>1)
        {
            k--;
            result=result+r[i++]+" ";
        }
        result=result+r[i];
        return result;
    }
};