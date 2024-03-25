#include <vector>
#include <algorithm>

class Solution {
public:
    int triangleNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); // Sort the input array
        int count = 0; // Initialize the count of valid triangles
        int n = nums.size(); // Get the size of the input array
        
        // Iterate through all possible combinations of three numbers
        for (int i = 0; i < n - 2; ++i) {
            // Skip zero elements
            if (nums[i] == 0)
                continue;
            int k = i + 2; // Initialize k to i + 2
            for (int j = i + 1; j < n - 1; ++j) {
                // Iterate k forward as long as the triangle inequality holds
                while (k < n && nums[i] + nums[j] > nums[k])
                    ++k;
                // Increment count by the number of valid triangles formed with i and j
                count += k - j - 1;
            }
        }
        
        return count; // Return the count of valid triangles
    }
};
