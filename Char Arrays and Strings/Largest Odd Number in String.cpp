class Solution {
public:
    string largestOddNumber(string num) {
    string largest_odd = "";
    int last_odd_index = -1;
    for (int i = 0; i < num.length(); i++) {
        if ((num[i] - '0') % 2 != 0) {
            last_odd_index = i;
        }
    }
    if (last_odd_index != -1) {
        largest_odd = num.substr(0, last_odd_index + 1);
    }
    return largest_odd;
}

};
