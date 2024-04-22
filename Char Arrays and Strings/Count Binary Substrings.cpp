class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0;
        int prevLength = 0, currLength = 1;
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currLength++;
            } else {
                count += min(prevLength, currLength);
                prevLength = currLength;
                currLength = 1;
            }
        }
        
        // Add the count for the last substring
        count += min(prevLength, currLength);
        
        return count;
    
    }
};
