#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int ioz;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
               ioz=i;
                break;
            } 
        }
        for(int i=0;i<ioz+1;i++){
            int a=nums[i];
            int diff=-a;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==diff){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                }
                else if(nums[j]+nums[k]<diff){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};
int main(){
    Solution obj;
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> v;
    v=obj.threeSum(nums);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
    }
}