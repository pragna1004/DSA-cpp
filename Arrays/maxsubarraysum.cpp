#include <iostream>
using namespace std;
int main(){
    int arr[]={1,7,-3,-5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int current_sum=arr[0];
    int maxsum=arr[0];
    for(int i=1;i<n;i++){
        current_sum=max(arr[i],current_sum+arr[i]);
        maxsum=max(maxsum,current_sum);
    }
    cout<<maxsum;
    return 0;
}