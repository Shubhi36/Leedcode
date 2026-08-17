class Solution {
public:
    int addDigits(int num) {
        int digit;
        if(num%9==0 && num!=0)
        return 9;
        else if(num==0)
        return 0;
        else
        return num%9;
    }
};