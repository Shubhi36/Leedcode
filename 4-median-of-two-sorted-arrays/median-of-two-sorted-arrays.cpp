
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1,
                                  vector<int>& nums2) {
        int low, high, l1, l2, r1, r2, mid;
        int len1 = nums1.size();
        int len2 = nums2.size();

        if (len1 > len2)
            return findMedianSortedArrays(nums2, nums1);

        int L = (len1 + len2 + 1) / 2;
        int total = len1 + len2;

        low = 0;
        high = len1;

        while (low <= high) {
            mid = (low + high) / 2;

            int cut1 = mid;
            int cut2 = L - cut1;

            if (cut1 == 0)
                l1 = INT_MIN;
            else
                l1 = nums1[cut1 - 1];

            if (cut2 == 0)
                l2 = INT_MIN;
            else
                l2 = nums2[cut2 - 1];

            if (cut1 == len1)
                r1 = INT_MAX;
            else
                r1 = nums1[cut1];

            if (cut2 == len2)
                r2 = INT_MAX;
            else
                r2 = nums2[cut2];

            if (l1 <= r2 && l2 <= r1) {
                int fth = max(l1, l2);
                int sth = min(r1, r2);

                if (total % 2 == 0)
                    return ((double)fth + sth) / 2.0;
                else
                    return fth;
            }
            else if (l1 > r2) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return 0.0;
    }
};
