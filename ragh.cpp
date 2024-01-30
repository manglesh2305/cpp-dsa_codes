#include <bits/stdc++.h>
using namespace std;
 

void permute(string & a, int l, int r, vector<int> & ans)
{
  
    if (l == r)
        ans.push_back(stoi(a));
        
    else {
     
        for (int i = l; i <= r; i++) {
 
     
            swap(a[l], a[i]);
 
           
            permute(a, l + 1, r,ans);
 
            
            swap(a[l], a[i]);
        }
    }
}
 

int main()
{
    string str = "524976";
    int n = str.size();
    vector<int> ans;
    
    permute(str, 0, n - 1,ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i]>stoi(str)){
            cout<<ans[i];
            break;
        }
    }
    return 0;
}