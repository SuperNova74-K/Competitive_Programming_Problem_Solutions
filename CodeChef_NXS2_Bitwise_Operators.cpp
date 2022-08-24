//
// Created by Khaled Waleed on 24-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n; cin >> n;
    ll a = 0 , b = 0;

//    if( (n&1) == 0){
//        a |= 1;
//        b |= 1;
//    }else{
//        a |=1;
//    }
    ll fine = 0;
    while(not ((1LL<<fine) & n)){
        fine++;
    }

    a |= (1LL<<fine);

    for (ll i = fine + 1; i <= 35; ++i) {
        if(n & (1LL<< i)){
            b |= (1LL << i);
        }
    }

    if((a ^ b) == n && (a >= 1) && (b <= n) && (b >= a)){
        cout << a << ' ' << b << '\n';
    }else{
        cout << -1 << '\n';
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