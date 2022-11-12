#include<bits/stdc++.h>
using namespace std;

int n=1000000;
int sieve[1000001];

void Sieve_Of_Eratosthenes(){
    for(int i=2 ; i<=n ; i++ ) sieve[i] = i ;
    for(int i=2 ; i*i<=n ; i++ ){
        if(sieve[i] == i ){
            for(int j=i*i ; j<=n ; j+=i ){
                if( sieve[j] == j ) sieve[j] = i ;
            }
        }
    }
}

int main(){
    Sieve_Of_Eratosthenes();   // N LOG(LOG(N))
    int testCases; cin >> testCases ;
    while( testCases-- ){
        int n1; cin >> n1 ;
      
        // O(LOG N)
        while( n1 != 1){
            cout << sieve[n1] << " ";
            n1/=sieve[n1];
        }
        cout << "\n" ;
    }
}
