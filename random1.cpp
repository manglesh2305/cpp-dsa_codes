#include<iostream>
using namespace std;
int solution(int x, int y){
    int count=0;
     if(x>y){
        while(x>y){
            x/=2;
            count++ ;
            if(x==y) return count ;
        }
    }
    if(x<y){
        while(x<y){
            x*=2;
            count++ ;
            if(x==y) return count;
        }
    }
    return -1;
}
int main()
{int t=5;
while(t--){
    int x,y;
    cin>>x>>y;
    int ans;
    ans=solution(x,y);
    cout<<ans;}
    return 0;
}