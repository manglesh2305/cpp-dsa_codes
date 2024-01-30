#include<iostream>
using namespace std;

int main()
{
    int m, n ;
    cout<<"enter no of rows :";
    cin>>m;
    cout<<"enter no of coloumns :";
    cin>>n;
    int matrix[m][n], transpose[n][m];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}