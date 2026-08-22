#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <chrono>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
void calculatetime(int arr[],int n){
    auto start=chrono::high_resolution_clock::now();
    selectionsort(arr,n);
    auto end=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::nanoseconds>(end-start);
    double microseconds=duration.count()/1000;
    cout<<fixed<<setprecision(3);
    cout<<"time obtained"
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