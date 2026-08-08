#include <iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i+=2){
        if(arr[i]!=arr[i-1]){
            cout<<arr[i-1];
            return 0;
        }
    }
    cout<<arr[n-1];
    return 0;
}