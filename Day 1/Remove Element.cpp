class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    int n=nums.size();
        
	if(n==0) return n;
	int i=0, j=n-1;
	while(i<=j)
	{
		if(nums[i]!=val)
		{
			i++;
		}
		else if(nums[i]==val)
		{
			nums[i]=nums[j];
			j--;
		}
	}
	return i;
    }
};