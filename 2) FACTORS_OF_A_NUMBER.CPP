#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int c=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            c++;
            cout << i << " ";
            if(n/i!=i){
                 c++;
                 cout << n/i << " ";
            }
        }
    }
    cout << endl ; 
    cout << "THE NO OF FACTORS IS " << c << "\n";
}
