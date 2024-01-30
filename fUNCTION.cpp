#include<iostream>
using namespace std;
/*float money(int a ,  float b=1.04){
    float MR=a*b;
    return MR;}*/
/*int factorial(int n ){
    if (n<=1){
        return 1 ;
    }

    return n*factorial(n-1);

}*/
int main(){
    int n  ;
    cout<<"enter tha value of n"<<endl;
    cin>>n;
    for(int i=n-1; i>=1; --i){
         n=n*i;
         cout<<n<<endl;
          }
    cout<<"factorial of given number is  "<<endl<< n;
    return 0;}
