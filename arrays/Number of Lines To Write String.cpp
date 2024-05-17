class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int totalLines = 1; // Start with one line
        int currentLineWidth = 0; // Width of the current line
        
        // Iterate through each character in the string
        for (int i = 0; i < s.length(); ++i) {
            int charWidth = widths[s[i] - 'a']; // Get the width of the current character
            
            // Check if adding this character exceeds the line width limit
            if (currentLineWidth + charWidth > 100) {
                totalLines++; // Start a new line
                currentLineWidth = charWidth; // Set the width of the new line
            } else {
                // Add the character width to the current line
                currentLineWidth += charWidth;
            }
        }
        
        // Return the total number of lines and the width of the last line
        return {totalLines, currentLineWidth};
    }
};
