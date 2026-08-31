class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        int i,len,j,temp,copy,digit,sum,k,a;
        vector <int> space;
        copy = n;
        
        while(n!=0)
        {
            digit = n%10;
            n = n/10;
            space.push_back(digit);
        }
        len = space.size();
        i = 0;
        j = len-1;
        while(i<=j)
        {
            temp = space[i];
            space[i] = space[j];
            space[j] = temp;

            i++;
            j--;
        }
        i = 0;
        j = 1;
        k = len-1;
        while(j<len)
        {
            if(space[i]<=space[j])
            {
                i++;
                j++;
            }
            else
            {
                if(space[k]!=0)
                space[k]--;
                else
                {
                    while(space[k]==0)
                    {
                        space[k] = 9;
                        k--;
                    }
                    space[k]--;
                }
                i = 0;
                j = 1;
            }
        }
        sum = 0;
        i = 0;
        a = len;
        while(i<len)
        {
            sum = sum + space[i] * pow(10,a-1);
            i++;
            a--;
        }
        return sum;
    }
};