#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);

    s.insert(4);
    s.insert(2);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << endl;
    } cout<<endl;

    /*s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << endl;
    }*/

    set<int>::iterator it =s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    } cout<<endl;

    cout<<"Checks if the element is present or not :"<<s.count(5)<<endl;


    set<int>::iterator itr=s.find(5);
    cout<<"Value present at itr:"<<*it<<endl;
}