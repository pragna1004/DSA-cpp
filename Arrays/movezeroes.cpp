#include <iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}