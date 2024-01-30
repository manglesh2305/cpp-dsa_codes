#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksmap;
    marksmap["golu"]=78;
    marksmap["harry"]=98;
    marksmap["abhi"]=79;
    marksmap.insert({{"pandu",76},{"mental",84}});
   // map<string, int> :: iterator iter;
    for(auto iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<marksmap.size()<<endl;
    cout<<marksmap.max_size()<<endl;
    cout<<marksmap.empty()<<endl;
    return 0;
}