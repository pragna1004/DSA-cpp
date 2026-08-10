#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int arr[]={2,3,7,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    unordered_set<int> seen;
    for(int i=0;i<n;i++){
        int needed=target-arr[i];
        if(seen.find(needed)!=seen.end()){
          cout<<needed<<" ,"<<arr[i];
        }
        seen.insert(arr[i]);
    }
    return 0;
}