class Solution {
public:
    string longestNiceSubstring(string s) {
        int len,i;
        len = s.size();
        if (len < 2)
        return "";
        
        unordered_set<char> charSet(s.begin(), s.end());
        
        for (int i = 0; i < s.length(); ++i) {
            if (charSet.find(swapcase(s[i])) == charSet.end()) {
                string left = longestNiceSubstring(s.substr(0, i));
                string right = longestNiceSubstring(s.substr(i + 1));
                return (left.length() >= right.length()) ? left : right;
            }
        }
        return s;
    }

private:
    char swapcase(char c) {
        if (c >= 'a' && c <= 'z') return c - 32;
        if (c >= 'A' && c <= 'Z') return c + 32;
        return c;
    }
};