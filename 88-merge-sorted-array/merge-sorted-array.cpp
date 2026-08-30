class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,k,len1,len2;
        len1 = nums1.size();
        len2 = nums2.size();
        i = len1-1;
        j = m-1;
        k = n-1;
        while(k>=0 && j>=0)
        {
            if(nums1[j]<nums2[k])
            {
                nums1[i] = nums2[k];
                i--;
                k--;
            }
            else
            {
                nums1[i] = nums1[j];
                i--;
                j--;
            }
        }
        while(k>=0)
        {
            nums1[i] = nums2[k];
            i--;
            k--;
        }
        while(j>=0)
        {
            nums1[i] = nums1[j];
            i--;
            j--;
        }
    }
};