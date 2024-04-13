class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       int n = s.length();
        vector<int> leftDist(n, n);  // Store distances to the left of each index
        vector<int> rightDist(n, n); // Store distances to the right of each index
        vector<int> answer(n);       // Store the final distances
        
        int closest = -n; // Initialize closest occurrence to a value that ensures the first occurrence will be selected
        
        // Iterate from left to right to find closest occurrence to the left of each index
        for (int i = 0; i < n; ++i) {
            if (s[i] == c)
                closest = i;
            leftDist[i] = i - closest;
        }
        
        closest = 2 * n; // Initialize closest occurrence to a value that ensures the last occurrence will be selected
        
        // Iterate from right to left to find closest occurrence to the right of each index
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c)
                closest = i;
            rightDist[i] = closest - i;
        }
        
        // Take the minimum of left and right distances
        for (int i = 0; i < n; ++i) {
            answer[i] = min(leftDist[i], rightDist[i]);
        }
        
        return answer; 
    }
};
