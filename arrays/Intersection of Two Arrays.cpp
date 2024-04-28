class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Create a hash set to store unique elements of nums1
        unordered_set<int> numSet(nums1.begin(), nums1.end());
        vector<int> result;

        // Iterate through nums2 and check if each element exists in the hash set
        for (int num : nums2) {
            if (numSet.count(num)) {
                result.push_back(num);
                // Remove the element from the hash set to avoid duplicates in the result
                numSet.erase(num);
            }
        }

        return result;
    }
};
