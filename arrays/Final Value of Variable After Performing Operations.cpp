class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0; // Initialize the variable X to 0

        // Iterate through each operation in the operations array
        for (int i = 0; i < operations.size(); ++i) {
            // Check the operation and update the value of X accordingly
            if (operations[i] == "++X" || operations[i] == "X++") {
                X += 1;
            } else if (operations[i] == "--X" || operations[i] == "X--") {
                X -= 1;
            }
        }

        // Return the final value of X after performing all operations
        return X;
    }
};
