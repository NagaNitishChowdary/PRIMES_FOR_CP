#include<bits/stdc++.h>
using namespace std;

int n=10000000;
int sieve[10000001];

void Sieve_Of_Eratosthenes(){
    for(int i=2 ; i<=n ; i++ ) sieve[i]=1;
    for(int i=2 ; i*i<=n ; i++ ){
        if( sieve[i] != 0 ){
            for(int j=i*i ; j<=n ; j+=i ){
                sieve[i]++;
                sieve[j]=0;
            }
        }
    }
}

int main(){
    Sieve_Of_Eratosthenes();
    int n; cin >> n ;
    while( n-- ){
        int k; cin >> k ;
        cout << sieve[k] << "\n" ;
    }
    return 0;
}
