#include <iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4};
    int B[]={2,6,7,8};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    int i=0;
    int j=0;
    int result[n];
    int k=0;
    while(i<n && j<m){
        if(A[i]==B[j]){
            result[k]=A[i];
            i++;
            j++;
            k++;
        }
        else if (A[i]<B[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i=0;i<k;i++){
        cout <<result[i]<<" ";
    }
}