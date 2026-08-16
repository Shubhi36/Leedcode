class Solution {
public:
    int addDigits(int num) {
        int sum,digit;
        while(num > 9)
        {
            sum = 0;
            while(num != 0)
            {
                digit = num%10;
                sum = digit + sum;
                num = num/10;
            }
            num = sum; 
        }
        return num;
    }
};