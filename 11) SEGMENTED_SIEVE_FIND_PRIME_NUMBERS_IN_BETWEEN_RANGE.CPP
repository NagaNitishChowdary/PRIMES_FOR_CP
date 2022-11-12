#include<bits/stdc++.h>
using namespace std;

int n=1000000;
bool sieve[1000001];

void Sieve_Of_Eratosthenes(){
    for(int i=2 ; i<=n ; i++ ) sieve[i] = true ;
    for(int i=2 ; i*i<=n ; i++ ){
        if(sieve[i] == true){
            for(int j=i*i ; j<=n ; j+=i) sieve[j]=false;
        }
    }
}

vector< int > generatePrimes(int r){
    vector< int >ds;
    for(int i=2 ; i<= r ; i++){
        if(sieve[i] == true) ds.emplace_back(i);
    }
    return ds;
}

int main(){
    // O(10^6)
    Sieve_Of_Eratosthenes();
    int testCases; cin >> testCases ;
    while(testCases--){
        int l,r; 
        cin >> l >> r ;

        // STEP 1 : GENERATE ALL PRIME TILL SQRT(r)
        // O(10^6)
        vector< int >primes = generatePrimes(sqrt(r));

        // STEP 2 : CREATE A DUMMY ARRAY OF SIZE R-L+1 
        // AND MAKE EVERYONE AS 1
        int dummy[r-l+1];
        for(int i=0 ; i<r-l+1 ; i++) dummy[i]=1;

        // STEP 3 : FOR ALL PRIME NUMBERS MARK ALL 
        // MULTIPLES AS FALSE
        for(auto pr : primes){
            int firstMultiple = (l/pr)*pr ;
            if(firstMultiple < l) firstMultiple += pr ;
            for(int j=max(firstMultiple,pr*pr) ; j<=r ; j+=pr){
                dummy[j-l]=0;
            }
        }

        // STEP 4 : GET ALL THE PRIMES
        for(int i=l ; i<=r ; i++){
            if(dummy[i-l] == 1){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0 ;

}
