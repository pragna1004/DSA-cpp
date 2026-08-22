#include <iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int v=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>v){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=v;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}