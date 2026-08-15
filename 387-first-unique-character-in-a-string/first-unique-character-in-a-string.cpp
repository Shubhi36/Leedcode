class Solution {
public:
    int firstUniqChar(string s) {
        int i,flag,arr[26] = {0};
    for(i=0;s[i]!='\0';i++){
        arr[s[i] - 'a']++;
        }
    for(i=0;s[i]!='\0';i++){
            if(arr[s[i]- 'a'] == 1)
            return i;
            }      
    return -1;
    }
};