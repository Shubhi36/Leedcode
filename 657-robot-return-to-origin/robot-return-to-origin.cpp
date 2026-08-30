class Solution {
public:
    bool judgeCircle(string moves) {
        int i,first,second;
        first = 0;
        second = 0;
        for(i=0;moves[i]!='\0';i++)
        {
            if(moves[i] == 'R')
            first++;
            else if(moves[i] == 'L')
            first--;
            else if(moves[i] == 'U')
            second++;
            else if(moves[i] == 'D')
            second--;
        }
        if(first == 0 && second == 0)
        return true;
        else
        return false;
    }
};