class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        istringstream ss(s);
        string word;
        int i = 0;
        
        while (ss >> word && i < pattern.size()) {
            char c = pattern[i];
            if (charToWord.find(c) == charToWord.end() && wordToChar.find(word) == wordToChar.end()) {
                charToWord[c] = word;
                wordToChar[word] = c;
            } else if (charToWord[c] != word || wordToChar[word] != c) {
                return false;
            }
            i++;
        }
        
        return i == pattern.size() && ss.eof();
    }
};
