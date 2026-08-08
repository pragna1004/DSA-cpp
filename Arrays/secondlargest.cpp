#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={7,13,10,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    int secondlargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest;
    return 0;
}