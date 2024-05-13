class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0; // Initialize current altitude to 0
        int highestAltitude = 0; // Initialize highest altitude to 0

        // Iterate through the gains
        for (int gainValue : gain) {
            // Update the current altitude by adding the gain
            currentAltitude += gainValue;
            // Update the highest altitude if the current altitude is greater
            highestAltitude = max(highestAltitude, currentAltitude);
        }

        // Return the highest altitude reached
        return highestAltitude;
    }
};
