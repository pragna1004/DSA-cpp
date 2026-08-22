#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <chrono>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void calculatetime(int arr[],int n){
    auto start=chrono::high_resolution_clock::now();
    bubblesort(arr,n);
    auto end=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::nanoseconds>(end-start);
    double microseconds=duration.count()/1000.0;
    cout<<fixed<<setprecision(6);
    cout<<"Time obtained:"
        <<microseconds
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