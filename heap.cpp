#include<iostream>
#include<algorithm>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        size=0;
    }
    void insert(int val){
        size++;
        int index=size-1;
        arr[index]=val;
        while(index>0){
            int parent =(index-1)/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }

    void Delete(){
        arr[0]=arr[size-1];
        size--;
        int i=0;
        while(i<size){
            int left=(2*i)+1;
            int right=(2*i)+2;
            if(left<size && arr[i]<arr[left]){
                swap(arr[left],arr[i]);
            }
            else if(right<size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
void heapify(int arr[], int n, int i){
    int left=(2*i)+1;
    int right=(2*i)+2;
    int largest=i;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[], int n){
    int size=n;
    while(size>1){
        swap(arr[size-1],arr[0]);
        size--;
        heapify(arr,size,0);
    }
}
int main(){
    Heap h;
    h.insert(25);
    h.insert(57);
    h.insert(45);
    h.insert(75);
    h.insert(33);
    h.Delete();
    h.print();
    int arr[]={42,75,24,15,78,35};
    int n=6;
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    heapSort(arr,n);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}