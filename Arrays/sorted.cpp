#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool sorted=true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
    if (sorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}