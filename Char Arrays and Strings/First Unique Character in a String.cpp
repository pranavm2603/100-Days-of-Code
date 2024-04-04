#include <string>
#include <unordered_map>

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount;

        // Count occurrences of each character in the string
        for (char ch : s) {
            charCount[ch]++;
        }

        // Find the first character with count 1
        for (int i = 0; i < s.size(); ++i) {
            if (charCount[s[i]] == 1) {
                return i;
            }
        }

        // If no non-repeating character found, return -1
        return -1;
    }
};
