class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Maps to store character mappings from s to t and from t to s
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        // Iterate through the strings
        for (int i = 0; i < s.length(); ++i) {
            char sChar = s[i];
            char tChar = t[i];

            // If sChar is already mapped to a different character in t, or vice versa,
            // the strings are not isomorphic
            if ((sToT.find(sChar) != sToT.end() && sToT[sChar] != tChar) ||
                (tToS.find(tChar) != tToS.end() && tToS[tChar] != sChar)) {
                return false;
            }

            // Map sChar to tChar and tChar to sChar
            sToT[sChar] = tChar;
            tToS[tChar] = sChar;
        }

        // If the loop completes without returning false, the strings are isomorphic
        return true;
    }
};
