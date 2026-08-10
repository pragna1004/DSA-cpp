#include <iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4};
    int B[]={2,4,6,7};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int result[n+m];
    int k=0;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
            result[k]=A[i];
            i++;
            k++;
        }
        else if(A[i]>B[j]){
            result[k]=B[j];
            j++;
            k++;
        }
        else {
            result[k]=A[i];
            i++;
            j++;
            k++;
        }
    }
    while(i<n){
        result[k]=A[i];
        i++;
        k++;
    }
    while(j<m){
        result[k]=B[j];
        j++;
        k++;
    }
    for(int i=0;i<k;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}