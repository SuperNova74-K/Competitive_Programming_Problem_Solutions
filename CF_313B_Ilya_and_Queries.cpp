//
// Created by Khaled Waleed on 22-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    string lol; cin >> lol;
    lol = "0" + lol;
    vector<ll>vec(lol.size());
    for (int i = 1; i <= lol.size()-1; ++i) {
        vec[i] = vec[i-1] + (lol[i] == lol[i+1]);
    }
    ll q; cin >> q;
    ll l,r;
    while(q--){
        cin >> l >> r;
        cout << vec[r-1] - vec[l-1] << '\n';
    }

    return 0;
}