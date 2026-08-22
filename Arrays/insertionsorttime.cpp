#include <iostream>
#include <cstdlib>
#include <chrono>
#include <iomanip>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int v=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>v){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=v;
    }
}
void calculatetime(int arr[],int n){
    auto start=chrono::high_resolution_clock::now();
    insertionsort(arr,n);
    auto end=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::nanoseconds>(end-start);
    double microseconds=duration.count()/1000.0;
    cout<<fixed<<setprecision(6);
    cout<<"Time taken"
    << microseconds
    <<"microseconds";
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%1000;
    }
    calculatetime(arr,n);
    return 0;
}