#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=m-1;
        int mid;
        while(i<=j){
            mid=j-(j-i)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
                for(int k=0;k<n;k++){
                    if(matrix[mid][k]==target) return true;
                }
                return false;
            }
            else if(matrix[mid][0]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=3;
    cout<<obj.searchMatrix(matrix,target);
    return 0;
}