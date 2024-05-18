class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count; // To store the frequency of each element
        unordered_map<int, int> first; // To store the first occurrence of each element
        unordered_map<int, int> last; // To store the last occurrence of each element
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (count.find(num) == count.end()) {
                first[num] = i; // Mark the first occurrence
            }
            last[num] = i; // Update the last occurrence
            count[num]++; // Update the frequency
        }
        
        // Find the degree of the array
        int degree = 0;
        for (const auto& kv : count) {
            degree = max(degree, kv.second);
        }
        
        // Find the smallest subarray length with the same degree
        int minLength = nums.size();
        for (const auto& kv : count) {
            if (kv.second == degree) {
                int num = kv.first;
                minLength = min(minLength, last[num] - first[num] + 1);
            }
        }
        
        return minLength;
    }
};
