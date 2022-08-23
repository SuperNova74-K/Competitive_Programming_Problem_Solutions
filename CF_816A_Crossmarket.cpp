//
// Created by Khaled Waleed on 20-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {

    ll n,m;
    cin >> n >> m;

    if(n == 1 && m ==1){
        cout << 0 << '\n';
    }
    else if(m == 1){
        cout << n << '\n';
    }else if( n == 1){
        cout << m << '\n';
    }
    else if(m < n){
        cout << (2 * m) + n - 2 << '\n';
    }else{
        cout << (2 * n) + m - 2 << '\n';
    }
}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}