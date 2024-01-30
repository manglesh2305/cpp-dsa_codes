#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string sentence="he is a good boy";
    string word="good";
    cout<<sentence.find(word)<<endl;
    
    return 0;
}