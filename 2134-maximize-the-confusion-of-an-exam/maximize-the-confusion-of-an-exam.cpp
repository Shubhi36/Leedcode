class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int len,i,count,max,j;
        len = answerKey.size();
        i = 0;
        j = 0;
        count = 0;
       
        max = 0;
        while(j<len)
        {
            if(answerKey[j] == 'F')
                count++;

            if(j<len && count > k)
            {
                 if(i<len && answerKey[i] == 'F')
                    count--;

                i++;
            } 
            if(max<(j-i)+1)
            max = (j-i)+1;
            j++;
        }
        i = 0;
        j = 0;
        count = 0;
        while(j<len)
        {
            if(answerKey[j] == 'T')
                count++;

            if(j<len && count > k)
            {
                if(i<len && answerKey[i] == 'T')
                 count--;

                i++;
            }
            if(max<(j-i)+1)
            max = (j-i)+1;
            j++;
        }
        return max;
    }
};