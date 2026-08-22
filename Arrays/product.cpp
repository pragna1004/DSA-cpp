#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int output[4];
    int n=sizeof(arr)/sizeof(arr[0]);
    int prefix=1;
    for(int i=0;i<n;i++){
        output[i]=prefix;
        prefix=prefix*arr[i];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        output[i]=output[i]*suffix;
        suffix=suffix*arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
    return 0;
}