#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int arr[]={1,1,2,1,3,2,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> visited;
    for(int i=0;i<n;i++){
        if (visited.find(arr[i])==visited.end()){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                  count+=1;
                }
            }
            visited.insert(arr[i]);
                if (count>=n/2){
                    cout<<arr[i];
                    return 0;
                }
        }
    }
}