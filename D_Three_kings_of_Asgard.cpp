//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n; cin >> n;
    ll a = n,b = n,c = n;

    if(n%2==1){
        cout << "Impossible\n";
        return;
    }

    c += (a/=2);
    b += (c/=2);
    a += (b/=2);

    if(a - (ll) a != 0 || b - (ll) b != 0 ||c - (ll) c != 0){
        cout << "Impossible\n";
        return;
    }

    if(a + b + c ==  n * 3){
        cout << a << ' ' << b << ' ' << c << ' ' << '\n';
    }else{
        cout << "Impossible\n";
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