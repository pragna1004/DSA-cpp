#include <iostream>
using namespace std;
/*
Problem: Find Largest Element in an Array

Algorithm:
1. Assume the first element is the largest.
2. Traverse the array.
3. If a larger element is found, update the largest.
4. Print the largest element.

Time Complexity: O(n)
Space Complexity: O(1)
*/
int main(){
    int arr[]={1,2,3,4,5};
    int largest=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
      if(arr[i]>largest){
        largest=arr[i];
      }
    }
    cout<<largest;
    return 0;
}