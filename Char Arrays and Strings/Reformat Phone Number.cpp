class Solution {
public:
    string reformatNumber(string number) 
    {
        string digit;
        for(char c:number) if(isdigit(c)) digit += c;

        string ans;
        int n = digit.size();
        int i = 0;
        while(i<n)
        {
            if(n-i > 4)
            {
                ans += digit.substr(i,3) + '-';
                i += 3;
            }
            else if(n-i == 4)
            {
                ans += digit.substr(i,2) + '-';
                i += 2;
                ans += digit.substr(i,2);
                i += 2;
            }
            else 
            {
                ans += digit.substr(i,n-i);
                break;
            }
        }
        return ans;
    }
};
