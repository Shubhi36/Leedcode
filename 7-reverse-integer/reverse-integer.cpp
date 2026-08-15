class Solution {
public:
    int reverse(int x) {
        int  i,len;
        long long digit,count;
        vector <int> space;
        while(x != 0)
        {
            digit = x%10;
            x = x/10;
            space.push_back(digit);
        }
        len = space.size();
        count = pow(10,len-1);
        i = 0;
        digit = 0;
        while(i<len)
        {
            digit = (count * space[i]) + digit;
            count = count/10;
            i++;
        }

        if (digit > INT_MAX || digit < INT_MIN)
        return 0;

        return (int)digit;
    }
};