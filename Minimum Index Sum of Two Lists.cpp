class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
         unordered_map<string, int> indexSum;
        vector<string> result;
        int minSum = INT_MAX;
        
        // Store indices of strings from list1
        for (int i = 0; i < list1.size(); ++i) {
            indexSum[list1[i]] = i;
        }
        
        // Find common strings and update minSum
        for (int j = 0; j < list2.size(); ++j) {
            if (indexSum.count(list2[j])) {
                int sum = j + indexSum[list2[j]];
                if (sum < minSum) {
                    minSum = sum;
                    result.clear();
                    result.push_back(list2[j]);
                } else if (sum == minSum) {
                    result.push_back(list2[j]);
                }
            }
        }
        
        return result;
    }
};
