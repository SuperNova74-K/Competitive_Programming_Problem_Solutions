//
// Created by Khaled Waleed on 10-Aug-22
//
#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    fio
    ll n; cin >> n;
    vector<vector<ll>>ndx(n+1);
    ll temp;
    for (int i = 1; i <= n; ++i) {
        cin >> temp;
        ndx[temp].push_back(i);
    }

    ll q,l,r,x; cin >> q;
    while(q--){
        cin >> l >> r >>x;
        cout << lower_bound(ndx[x].begin(),ndx[x].end(),r) - lower_bound(ndx[x].begin(),ndx[x].end(),l-1) << '\n';
    }

    return 0;
}