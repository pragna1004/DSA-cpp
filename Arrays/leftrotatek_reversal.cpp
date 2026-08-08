#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int k=2;
    int start=0;
    int end=k-1;
    int n=sizeof(arr)/sizeof(arr[0]);
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    int s=k;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    start=0;
    end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}