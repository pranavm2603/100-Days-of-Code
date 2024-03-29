#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (isupper(c)) { // Check if the character is uppercase
                c = tolower(c); // Convert to lowercase
            }
        }
        return s;
    }
};
