class Solution {
public:
    std::string removeDuplicates(std::string s) {
        int i = 0; // Index to track the position of the next character to be placed in the result string
        
        // Iterate through each character in the string
        for (char c : s) {
            if (i > 0 && s[i - 1] == c) {
                // If  current character is equal to the previous character in the result string, skip it
                // This effectively removes the adjacent duplicate characters
                --i; // Move back one position in the result string
            } else {
                // Otherwise, place the current character in the result string
                s[i++] = c;
            }
        }
        
        // The characters from index 0 to index i-1 in the string 's' represent the final result
        return s.substr(0, i);
    }
};
