#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
int main(){
    int m,n,gcd;
    int divisions=0;
    cout<<"Enter the two numbers:";
    cin>>m>>n;
    int min=(m<n)?m:n;
    auto start=high_resolution_clock::now();
   for(int i=1;i<=min;i++){
    divisions++;
    if(m%i==0){
        divisions ++;
        if(n%i==0){
            gcd=i;
        }
    };
    }
   auto end=high_resolution_clock::now();
   auto time=duration_cast<nanoseconds>(end-start);
   cout<<"gcd:"
   << gcd;
   cout<<"No of divisions:"<<divisions<<endl;
   cout<<"time executed:"<<time.count()/1000.0<<"microseconds"<<endl;
   return 0;
}