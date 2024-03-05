#include <bits/stdc++.h>

#include <string> 

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

    // Write your code here.

    string s1="",s2="";

    for(int i=0; i<n; ++i)

    {

        s1.push_back('0'+a[i]);

    }

    for(int j=0; j<m; ++j)

    {

        s2.push_back('0'+b[j]);

    }

    int sum = stoi(s1)+stoi(s2);

    vector<int>ans;

    while(sum>0)

    {

        int c = sum%10;

        ans.push_back(c);

        sum/=10;

    }

    reverse(ans.begin(),ans.end());

    return ans;

 

}
