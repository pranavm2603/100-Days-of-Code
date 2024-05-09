#include <string>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        // Create a map to store the frequency of characters in magazine
        std::unordered_map<char, int> charCount;

        // Count the frequency of characters in magazine
        for (char ch : magazine) {
            charCount[ch]++;
        }

        // Check if the characters in ransomNote can be constructed from magazine
        for (char ch : ransomNote) {
            // If the character is not present in magazine or its frequency is 0, return false
            if (charCount.find(ch) == charCount.end() || charCount[ch] == 0) {
                return false;
            }
            // Decrement the frequency of the character in magazine
            charCount[ch]--;
        }

        // If all characters in ransomNote can be constructed, return true
        return true;
    }
};
