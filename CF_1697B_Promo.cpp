//
// Created by Khaled Waleed on 12-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n, q; cin >> n >> q;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    std::sort(vec.rbegin(), vec.rend());

    for (int i = 1; i < n; ++i) {
        vec[i] += vec[i-1];
    }
    ll x,y;
    for (int i = 0; i < q; ++i) {
        cin >> x >> y;
        y = x-y;
        y--;
        x--;
        if(y==-1){
            cout << vec[x] << '\n';
        }else{
            cout << vec[x] - vec[y] << '\n';
        }


    }

    return 0;
}