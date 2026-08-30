class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        long int i,len,top,bottom;
        len = nums.size();
        vector <int> space(len);
        top = 0;
        bottom = len-1;
        i = len-1;
        while(top<=bottom)
        {
            if(nums[top]*nums[top] < nums[bottom]*nums[bottom])
            {
                space[i] = (nums[bottom]*nums[bottom]);
                bottom--;
            }
            else
            {
                space[i] = nums[top]*nums[top];
                top++;
            }
            i--;
        }
        return space;
    }
};