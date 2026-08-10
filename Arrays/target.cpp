#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,7,11};
    int target=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j];
                return 0;
            }
        }
    }
}