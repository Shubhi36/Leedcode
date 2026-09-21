class Solution {
public:
    int minimumSum(int num) {
        int i,len,digit,digit1,digit2,sum;
        vector <int> space;
        while(num!=0)
        {
            digit = num%10;
            num = num/10;
            space.push_back(digit);
        }
        sort(space.begin(),space.end());
        len = space.size();
        for(i=0;i<len;i++)
        {
            if(i == 0)
            digit1 = space[i] * 10;
            if(i == 1)
            digit2 = space[i] * 10;
            if(i == 2)
            digit1 = digit1 + space[i];
            if(i == 3)
            digit2 = digit2 + space[i];
        }
        sum = digit1 + digit2;
        return sum;
    }
};