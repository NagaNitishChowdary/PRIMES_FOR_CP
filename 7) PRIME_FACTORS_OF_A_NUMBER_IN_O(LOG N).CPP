#include <iostream>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    int n; cin>>n;
    set< int >st ;
    for(int i=2 ; i*i<n ; i++ ){
        while(n%i==0){
            st.insert(i);
            n/=i ;
        }
    }
    for( auto it:st ) cout << it << " ";
    int primeFactors = st.size() ;
    if( n>1 ){ cout << n << "\n" ; primeFactors++; }
    cout << "THE NO OF PRIME FACTORS ARE " << primeFactors ;
}
