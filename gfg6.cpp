#include <iostream>
using namespace std;

int main() {
	int n,D;
	cin>>n;
	cin>>D;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	for(int i=D;i<n;i++){
	    cout<<arr[i]<<" ";
	    }
	for(int i=0;i<D;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}