#include <string>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // Convert wordDict into a set for faster lookup
        std::unordered_set<std::string> wordSet(wordDict.begin(), wordDict.end());
        
        int n = s.size();
        // dp[i] represents if substring s[0:i] can be segmented into words from wordDict
        std::vector<bool> dp(n + 1, false);
        dp[0] = true; // Empty string is always segmented
        
        // Iterate through the string
        for (int i = 1; i <= n; ++i) {
            // Iterate through possible end positions of the last word in the substring
            for (int j = 0; j < i; ++j) {
                // If dp[j] is true and the substring from j to i-1 is in wordDict
                // then update dp[i] to true
                if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        // The whole string can be segmented if dp[n] is true
        return dp[n];
    }
};
