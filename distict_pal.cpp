#include<iostream>
using namespace std;
void solution()
{
    int N,X;
    cin>>N>>X;
    int min_length=2*X-1;
    if(N<min_length)
    {
        cout<<-1<<endl;
        return;
    }
    string ans=string(N,'a');
    for(int i=1; i<X; i++)
    {
        ans[i-1]='a'+i;
        ans[N-i]='a'+i;
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solution();
	}
	return 0;
}
