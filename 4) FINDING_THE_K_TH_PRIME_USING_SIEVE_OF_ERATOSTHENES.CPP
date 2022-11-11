// FOR RANGE 5 * 1O POWER 6 THE LAST PRIME NUMBER IS 86028121

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int n=86028121;
bool arr[1000000000];
vector< long long int > ds;
void SieveOfEratosthenes(){
    for(long long int i=2;i<n;i++) arr[i]=true;
    for(long long int i=2;i*i<=n;i++){
        if(arr[i]==true){
            for(long long int j=i*i;j<=n;j+=i){
                arr[j]=false;
            }
        }
    }
    

    //int limit=5000000;
    //int c=0,req=0;
    //for(int i=2;;i++){
        //if(arr[i]==true) c++;
        //if(c==limit){ req=i; break; }
    //}
    //cout << req << endl;

    for(long long int i=2 ; i<=n ; i++) {
        if(arr[i]==true) ds.emplace_back(i);
    }
}

int main() {
    long long int testCases; cin>> testCases;
    SieveOfEratosthenes();
    while(testCases--){
        long long int n1; cin>>n1;
        cout << ds[n1-1] << "\n";
    }
}
