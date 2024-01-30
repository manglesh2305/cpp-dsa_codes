#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> v;
        long long GCD,LCM ;
        long long x=max(A,B);
        long long y=min(A,B);
        if(x%y==0)
        {
             GCD=y;
        }
        else 
        {
            long long rem=x%y;
            lcmAndGcd(y,rem);
        }
        LCM=(A*B)/GCD ;
        v.push_back(LCM);
        v.push_back(GCD);
        return v;
    }
};
int main() {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}