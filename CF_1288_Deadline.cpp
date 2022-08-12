//
// Created by Khaled Waleed on 07-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,d; cin >> n >> d;

    ll l = 1,r = n;

    ll optimization;

    if(d <= n){
        cout << "YES\n";
        return;
    }
    ll runtime;
    while(l <= r){
        optimization = (l+r)/2;
        runtime = (d+(optimization+1)-1)/(optimization+1);
        if(runtime > optimization){
            l = optimization+1;
        }else{
            r = optimization-1;
        }
    }
    if(optimization + runtime <= n){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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