class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int> answer;
            for(auto x : nums1)
            {
                if(find(nums2.begin(),nums2.end(),x)!=nums2.end() && find(answer.begin(),answer.end(),x)==answer.end())
                    answer.push_back(x);
                
        }
    return answer;
        
    }
};