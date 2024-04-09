class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;

        // Count occurrences of each character in the string
        for (char ch : s) {
            charCount[ch]++;
        }

        int length = 0;
        bool hasOddCount = false;

        // Calculate the length of the longest palindrome
        for (const auto& pair : charCount) {
            length += pair.second / 2 * 2; // Add pairs of characters
            if (pair.second % 2 == 1) {    // If count is odd
                hasOddCount = true;
            }
        }

        // If there's at least one character with an odd count, add 1 to the length
        if (hasOddCount) {
            length++;
        }

        return length;
    }
};
