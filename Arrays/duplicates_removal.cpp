#include <iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,5,5};
    int i=0;
    int j=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}