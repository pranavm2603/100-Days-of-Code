#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
   int i=0;

   int e=s.size()-1;

    while(i<e)

    {

        while(i<e && !isalnum(s[i]))

        {

            i++;

        }

        while(i<e && !isalnum(s[e]))

        {

            e--;

        }

        int ans=s[i]-s[e];

        if(ans==32 || ans==-32 || ans==0 )

        {
            i++;
            e--;

        }

        else {
            return false;

        }

    }

    return true;
}
