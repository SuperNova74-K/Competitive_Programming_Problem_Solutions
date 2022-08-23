//
// Created by Khaled Waleed on 17-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n,m; cin >> n >> m;
    vector<ll>vec(n);
    vector<ll>answers(n+1);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    unordered_set<ll>lol;

    for (int i = n-1; i >= 0 ; --i) {
        lol.insert(vec[i]);
        answers[i+1] = lol.size();
    }

    for (int i = 0; i < m; ++i) {
        cin >> n;
        cout << answers[n] << '\n';
    }

    return 0;
}