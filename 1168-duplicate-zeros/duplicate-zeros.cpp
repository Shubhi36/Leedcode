class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len,i,j,k;
        len = arr.size();
        i = 0;
        while(i<len)
        {
            if(arr[i] == 0 && i != len-1)
            {
                j = len-1;
                k = i;
                while(j!=k)
                {
                    arr[j] = arr[j-1];
                    j--;
                }
                i++;
                i++;
            }
            else
            {
                i++;
            }
        }
    }
};