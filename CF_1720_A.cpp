//
// Created by Khaled Waleed on 18-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll gcd_1 = gcd(a,b);
    ll gcd_2 = gcd(c,d);
    a/= gcd_1;
    b/= gcd_1;
    c/= gcd_2;
    d/= gcd_2;
    ll answer = 0;
    if(a!=c){
        answer++;
    }
    if(b!=d && (a!=0 || b!=0)){
        answer++;
    }
    cout << answer << '\n';
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