//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,steven,other;
    cin >> n >> steven >> other;
    if(steven > other){
        if( ((steven - other - 1) & 1) == 0){
            cout << "Mikael\n";
        }else{
            cout << "Steven\n";
        }
    }else{
        if( ((other - steven - 1) & 1 ) == 0){
            cout << "Mikael\n";
        }else{
            cout << "Steven\n";
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