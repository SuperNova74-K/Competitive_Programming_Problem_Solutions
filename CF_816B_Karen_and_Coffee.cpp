//
// Created by Khaled Waleed on 14-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    fio

    ll n,k,q; cin >> n >> k >> q;
    vector<ll>admissible(200000+1);
    std::fill(admissible.begin(), admissible.end(),0);
    ll l,r;
    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        admissible[l]++;
        admissible[r+1]--;
    }
    for (int i = 1; i < 200000+1; ++i) {
        admissible[i] += admissible[i-1];
    }
    for (int i = 1; i <= 200000+1; ++i) {
        admissible[i] = (admissible[i] >= k);
        admissible[i]+=admissible[i-1];
    }

    for (int i = 1; i <= q; ++i) {
        cin >> l >> r;
        cout << admissible[r] - admissible[l-1] << '\n';
    }

    return 0;
}