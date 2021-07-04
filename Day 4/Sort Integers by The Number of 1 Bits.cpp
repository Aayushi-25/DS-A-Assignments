class Solution {
public:
    bool static comparator(int x, int y)
    {
        int set_bits1, set_bits2;
        set_bits1=__builtin_popcount(x);
        set_bits2=__builtin_popcount(y);
        if(set_bits1==set_bits2) return x<y;
        else return set_bits1<set_bits2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comparator);
        return arr;
    }
};