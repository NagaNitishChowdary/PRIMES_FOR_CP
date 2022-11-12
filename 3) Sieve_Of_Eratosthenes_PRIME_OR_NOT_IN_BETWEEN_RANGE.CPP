// SIEVE OF ERATOSTHENES IS THE ONE OF THE MOST EFFICIENT WAYS TO FIND ALL PRIMES SMALLER THAN 10 MILLION OR MORE

// ARRAY INT MAX SIZE IN LOCAL SECTION IS 10 POWER 6
// ARRAY INT MAX SIZE IN GLOBAL SECTION IS 10 POWER 7
// BOOL MAX SIZE IN LOCAL SECTION IS 10 POWER 7
// BOOL MAX SIZE IN GLOBAL SECTION IS 10 POWER 8

// TIME COMPLEXITY OF SIEVE OF ERATOSTHENES IS O(N LOG(LOG N))

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int N=1000000;
bool arr[1000001];
void SieveOfEratosthenes(){
    for(int i=2;i<=N;i++) arr[i]=true;
    for(int i=2;i*i<=N;i++){
        if(arr[i]==true){
            for(int j=i*i;j<=N;j+=i) arr[j]=false;
        }
    }
}

int main() {
    int testCases; cin>> testCases;
    SieveOfEratosthenes();
    while(testCases--){
        int n1; cin>>n1;
        if(arr[n1]==true) cout << "Prime " << endl;
        else cout << "not prime " << endl;
    }
}
