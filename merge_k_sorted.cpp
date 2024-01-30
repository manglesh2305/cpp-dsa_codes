//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
//#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

struct triplet{
    int val;
    int i;
    int j;
    triplet(int data, int row, int col){
        val=data;
        i=row;
        j=col;
    }
};
struct myCmp{
    bool operator()(triplet &t1, triplet &t2){
    return t1.val>t2.val;
}
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> ans;
        priority_queue<triplet, vector<triplet>,myCmp> pq;
        for(int i=0;i<K;i++){
             triplet t=triplet(arr[i][0],i,0);
            pq.push(t);
        }
        while(!pq.empty()){
            triplet curr=pq.top();
            ans.push_back(curr.val);
            pq.pop();
            int row=curr.i;
            int col=curr.j;
            if(row<K && col+1<K){
                triplet t(arr[row][col+1],row,col+1);
                pq.push(t);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
        vector<vector<int>> arr={{1,2,3,},{4,5,6},{7,8,9}};
        int k=3;
	    Solution obj;
        cout<<"entered"<<endl;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
        cout<<"exit";
	return 0;
}






// } Driver Code Ends