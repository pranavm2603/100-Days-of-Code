#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int index = 0; // Index to track where to place the compressed characters
        int i = 0; // Index to traverse the input array

        while (i < chars.size()) {
            char current_char = chars[i]; // Current character
            int count = 0; // Count of consecutive occurrences of current character

            // Count consecutive occurrences of current character
            while (i < chars.size() && chars[i] == current_char) {
                ++count;
                ++i;
            }

            // Place the character in the result array
            chars[index++] = current_char;

            // If count is greater than 1, append the count as characters
            if (count > 1) {
                std::string count_str = std::to_string(count);
                for (char c : count_str) {
                    chars[index++] = c;
                }
            }
        }

        return index; // Return the length of the compressed array
    }
};
