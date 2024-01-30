#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int,greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(7);
    s.insert(6);
    s.erase(2);
    s.erase(s.begin());

    for(auto i=s.begin(); i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<s.size()<<endl;

    return 0;
}