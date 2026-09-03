class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        long long int i,len,j,count,min,max,mid,ans,multi;
        len = potions.size();
        sort(potions.begin(),potions.end());
        vector <int> space;
        for(i=0;i<spells.size();i++)
        {
            min = 0;
            max = len-1;
            ans = 0;
            while(min<=max)
            {
                mid = (min+max)/2;
                multi = 1LL*spells[i]*potions[mid];
                if(multi>=success)
                {
                    ans = len-mid;
                    max = mid-1;
                }
                else
                min = mid+1;
            }
            space.push_back(ans);
        }
        return space; 
    }
};