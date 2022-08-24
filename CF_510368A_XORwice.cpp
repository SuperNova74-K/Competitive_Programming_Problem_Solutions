//
// Created by Khaled Waleed on 23-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll a ,b; cin >> a >> b;

    ll d = min(a,b);
    for (ll i = 62; i >= 0; --i) {
        if(d & (1LL << i)){
            for (ll j = i; j >= 0 ; j--) {
                if( (b & (1LL << j)) == (a & (1LL << j))){
                    if(  (   b & (1LL << j)   )  ){
                        a ^= ( 1LL << j);
                        b ^= ( 1LL << j);
                    }
                }
            }

            break;
        }
    }
    cout << a + b << '\n';

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