#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
int main(){
    int m,n,gcd;
    cout<<"Enter the two numbers:";
    cin>>m>>n;
    int divisions=0;
    auto start=high_resolution_clock::now();
    int min=(m>n)?n:m;
        int max=(m<n)?n:m;
    while(min!=0){
        min=(m>n)?n:m;
        max=(m<n)?n:m;
        divisions++;
        int r=max%min;
        max=min;
        min=r;
    }
    auto end=high_resolution_clock::now();
    auto time=duration_cast<nanoseconds>(end-start);
    cout<<"gcd"
    << m;
    cout<<"time:"<<time.count()/1000.0<<"microseconds";
    cout<<"divisions:"<<divisions;
    return 0;
}