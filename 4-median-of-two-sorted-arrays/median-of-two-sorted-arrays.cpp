class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1,len2,i,j,len;
        double mid;
        len1 = nums1.size();
        len2 = nums2.size();
        vector <int> space;
        i = 0;
        j = 0;
        while(i<len1 && j<len2)
        {
            if(nums1[i]<nums2[j])
            {
                space.push_back(nums1[i]);
                i++;
            }
            else
            {
                space.push_back(nums2[j]);
                j++;
            }
        }
        while(i<len1)
        {
            space.push_back(nums1[i]);
            i++;
        }
        while(j<len2)
        {
            space.push_back(nums2[j]);
            j++;
        }
        len = len1+len2;
        if(len%2 == 0)
        {
            mid = (double) (space[len/2] + space[(len/2)-1])/2;
            return mid;
        }
        else
        {
            mid = (double) space[len/2];
            return mid;
        }
        return {};
    }
};