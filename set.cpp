#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>> s;
    multiset<int> m;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.erase(2);
    s.erase(s.begin());

    m.insert(1);
    m.insert(2);
    m.insert(2);
    m.insert(3);
    m.insert(4);
    m.erase(m.find(3));            //will erase first occurence of 3// m.erase(3) will delete all 3
    for(auto i=s.begin(); i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<s.size()<<endl;

     for(auto i=m.begin(); i!=m.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<m.size();
    return 0;
}