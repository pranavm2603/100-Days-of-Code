#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Pranav";
    m[2] = "Majagaonkar";
    m[13] = "Sakshi";
    m.insert({5,"Ganu"});
    for (auto i : m)
    {
        cout << i.first <<" "<<i.second<< endl;
    }

    auto it = m.find(5);

    for (auto i = it; i!= m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    
}