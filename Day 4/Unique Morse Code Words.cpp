class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        string str;
        for(auto i:words)
        {
            str="";
            for(auto c:i)
            {
                str=str+code[int(c)-97];
            }
            s.insert(str);
        }
        return s.size();
    }
};