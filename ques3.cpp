#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true ;
            }
        }
        return false ; 
    }
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
   // v.push_back(1);
    bool b= containsDuplicate(v);
    cout<<b;
    return 0;
}