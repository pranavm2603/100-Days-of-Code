#include <string>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        // Check if all letters are uppercase
        if (isUpperCase(word))
            return true;
        
        // Check if all letters are lowercase
        if (isLowerCase(word))
            return true;
        
        // Check if only the first letter is uppercase
        if (isFirstUpperCase(word) && isRestLowerCase(word))
            return true;
        
        // If none of the conditions are met, return false
        return false;
    }
    
private:
    bool isUpperCase(string word) {
        for (char c : word) {
            if (!isupper(c))
                return false;
        }
        return true;
    }
    
    bool isLowerCase(string word) {
        for (char c : word) {
            if (!islower(c))
                return false;
        }
        return true;
    }
    
    bool isFirstUpperCase(string word) {
        return isupper(word[0]);
    }
    
    bool isRestLowerCase(string word) {
        for (int i = 1; i < word.length(); i++) {
            if (!islower(word[i]))
                return false;
        }
        return true;
    }
};
