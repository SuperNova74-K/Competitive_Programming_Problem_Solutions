//
// Created by Khaled Waleed on 12-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,q; cin >> n >>q;
    vector<ll>vec(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }
    std::sort(vec.rbegin(), vec.rend()-1);
    vec[0] = 0;
    for (int i = 1; i <= n; ++i) {
        vec[i] += vec[i-1];
    }
    ll x;
    for (int i = 0; i < q; ++i) {
        cin >> x;
        auto mark = lower_bound(vec.begin(),vec.end(),x);
        if(mark == vec.end()){
            cout << -1 << '\n';
        }else{
            cout << mark - vec.begin() << '\n';
        }
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