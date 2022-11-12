// FINDING THE SMALLEST PRIME FACTOR 

#include<bits/stdc++.h>
using namespace std;

int n=10000000;
int sieve[10000000];
void Seive_Of_Eratosthenes(){
    for(int i=2 ; i<=n ; i++ ) sieve[i]=1;
    for(int i=2 ; i*i<=n ; i++ ){
        if(sieve[i] == 1){
            for(int j=i*i ; j<=n ; j+=i ) sieve[j] = i ;
            sieve[i]=i;
        }
    }
}


int main()
{
    Seive_Of_Eratosthenes();
    int testCases; cin >> testCases ;
    while(testCases--){
        int n1; cin >> n1 ;
        cout << sieve[n1] << "\n" ;
    }

}
