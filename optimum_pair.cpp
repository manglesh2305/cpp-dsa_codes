#include <iostream>
#include<climits>
using namespace std;

int gcd(int a, int b)
{
    int result=min(a,b); // Find Minimum of a nd b
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
            break;
        }
        result--;
    }
    return result;// return gcd of a nd b
}
int lcm(int a, int b)
{
    int g=gcd(a,b);
    int LCM=(a*b)/g;
    return LCM;
}
void solution()
{
    int N,a,b,ans=0,min=INT_MAX;
    cin>>N;
    for(int i=1; i<N; i++)
    {
       a=i;
       b=N-i;
       int gc=gcd(a,b);
       int lc=lcm(a,b);
       int c=gc+lc;
       if(c<min)
       {
           min=c;
           ans=1;
       }
      else if(c==min)
      {
        ans++ ;
      }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
    cout<<gcd(2,103)<<endl;
    cout<<lcm(4,6)<<endl;
    solution();
	return 0;
}
