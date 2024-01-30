#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;
    list<int> list2(3);
    list1.push_back(2);
    list1.push_back(8);
    list1.push_back(7);
    list1.push_back(23);
    list1.push_back(41);
   /* list<int> :: iterator iter ;
    iter=list1.begin();
    cout<<*iter<<endl;
    iter++;
    cout<<*iter;*/
    display(list1);
    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=78;
    iter++;
    *iter=123;
    list2.push_back(12);
    iter++;/////////////////*******************/////////////////////
    /*removing elements from list
    list1.pop_back();
    list1.pop_front();
    list1.remove(8);
    list1.sort();
    list1.reverse();
    display(list1);*/
    display(list2);
    /*iter++;
    cout<<*iter;*/
    list1.merge(list2);
    cout<<"list 1 after merging : ";
    display(list1);
    return 0;
}