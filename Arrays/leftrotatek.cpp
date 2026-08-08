#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int temp[]={10,20,30};
    for(int i=0;i<k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}