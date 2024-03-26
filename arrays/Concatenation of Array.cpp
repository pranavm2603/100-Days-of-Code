#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n); // Initialize ans with size 2 * n

        // Copy elements from nums to ans
        for (int i = 0; i < n; ++i) {
            ans[i] = nums[i];
            ans[i + n] = nums[i]; // Concatenate with the second copy of nums
        }

        return ans;
    }
};
