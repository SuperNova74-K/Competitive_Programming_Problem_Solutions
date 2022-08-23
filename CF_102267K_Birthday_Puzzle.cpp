//
// Created by Khaled Waleed on 15-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    fio

    ll n,bigsum = 0; cin >> n;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    for (ll mask = 0; mask < (1LL << n); ++mask) {
        vector<ll>current_set;

        for (int i = 0; i < n; ++i) {
            if(mask & (1LL << i)){
                current_set.push_back(vec[i]);
            }
        }
        if(not current_set.empty()) {
            ll sum = current_set[0];
            for (int i = 0; i < current_set.size() - 1; ++i) {
                sum |= current_set[i + 1];
            }
            bigsum += sum;
        }
    }
    cout << bigsum;


    return 0;
}