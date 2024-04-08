class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> lastOccurrence;

        for (int i = 0; i < s.length(); ++i) {
            lastOccurrence[s[i]] = i;
        }

        stack<char> stack;
        unordered_map<char, bool> visited;

        for (int i = 0; i < s.length(); ++i) {
            char currentChar = s[i];

            if (visited[currentChar]) {
                continue;
            }

            while (!stack.empty() && stack.top() > currentChar && lastOccurrence[stack.top()] > i) {
                visited[stack.top()] = false;
                stack.pop();
            }

            stack.push(currentChar);
            visited[currentChar] = true;
        }

        string result = "";
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }

        return result;
    }
};
