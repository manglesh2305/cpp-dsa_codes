#include<iostream>
using namespace std;
class solution{
    int sum=0;
    public:
    int getsum(int a[],n){
        for(i=0;i<n;i++){
            sum=sum+a[i];
        }
        return sum;
    }
};
int main(){
    int a[];
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    solution op;
    cout<<op.getsum();
    return 0;
}
