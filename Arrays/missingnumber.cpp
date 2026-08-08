#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i+1]!=arr[i]+1){
            cout<<arr[i]+1;
            return 0;
        }
    }
    cout<<"sorted";
    return 0;
}