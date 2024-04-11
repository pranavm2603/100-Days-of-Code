class Solution {
public:
    string addStrings(string num1, string num2) {
      int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";
        
        // Iterate from right to left in both strings
        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            result = to_string(sum % 10) + result; // Add the least significant digit to the result
            carry = sum / 10; // Determine carry for the next iteration
        }
        
        return result;  
    }
};
