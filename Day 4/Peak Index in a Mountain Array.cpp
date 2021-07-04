class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1, mid, pos;
        int h=arr.size()-2;
        while(l<=h)
        {
            mid=l+((h-l)/2);
            if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
            {
                pos=mid;
                break;
            }
            else if(arr[mid]>arr[mid-1])
                l=mid+1;
            else
                h=mid-1;
        }
        return pos;
    }
};