//
// Created by Khaled Waleed on 24-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;




int main() {
    fio

    ll n; cin >> n;
    vector<pair<ll,ll>>map(n+1);
    for (int i = 1; i <= n; ++i) {
        map[i].first = i;
        cin >> map[i].second;
    }

    for (int i = 1; i <= n; ++i) {
        if(map[map[map[i].second].second].second == i){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}