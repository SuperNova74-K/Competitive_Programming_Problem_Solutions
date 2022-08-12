//
// Created by Khaled Waleed on 12-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n; cin >> n;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    for (int i = 1; i < n; ++i) {
        vec[i]+=vec[i-1];
    }
    ll q,l,r; cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        if(l == 0){
            cout << vec[r] << '\n';
        }else{
            cout << vec[r]-vec[l-1] << '\n';
        }
    }

    return 0;
}