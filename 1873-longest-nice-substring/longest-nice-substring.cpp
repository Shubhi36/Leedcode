class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.length() < 2) return "";
        
        int n = s.length();
      
        int lowerBit = 0, upperBit = 0;
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                lowerBit |= (1 << (c - 'a'));
            } else if (c >= 'A' && c <= 'Z') {
                upperBit |= (1 << (c - 'A'));
            }
        }
        for (int i = 0; i < n; ++i) {
            char c = s[i];
            bool isValid = false;
            if (c >= 'a' && c <= 'z') {
                if ((upperBit & (1 << (c - 'a'))) != 0) {
                    isValid = true;
                }
            } else {
                if ((lowerBit & (1 << (c - 'A'))) != 0) {
                    isValid = true;
                }
            }
            
        
            if (!isValid) {
                string left = longestNiceSubstring(s.substr(0, i));
                string right = longestNiceSubstring(s.substr(i + 1));
                return (left.length() >= right.length()) ? left : right;
            }
        }
        return s;
    }
};