#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int c=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) c++;
    }
    if(c==0 && n!=1) cout<< "PRIME NUMBER" << "\n";
    else cout << "NOT A PRIME NUMBER" << "\n";
}
