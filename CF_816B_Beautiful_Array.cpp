//
// Created by Khaled Waleed on 20-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {

    ll n , k , s , b;
    cin >> n >> k >> b >> s;

    ll my_b = 0;
    ll my_s = 0;


//    while(my_b < b){
//        my_s++;
//        my_b = my_s / k;
//    }

    ll l = 0,r = INT_MAX, midpoint;

    while(l <= r){
        midpoint = (l+r)/2;
        if(my_b > b){
            r = midpoint-1;
        }else if(my_b < b){
            l = midpoint+1;
        }
        my_b = midpoint / k;
    }
    my_s = midpoint;

    while(my_b == b){
        my_s--;
        my_b = my_s / k;
    }

    while(my_b < b){
        my_s++;
        my_b = my_s / k;
    }

    if(my_b == b ){
        if(my_s < s){
            b = s / k;
        }
        if(my_b == b){
            cout << s;
            for (int i = 0; i < n - 2; ++i) {
                cout << 0 << ' ';
            }
            cout << 0 << '\n';
            return;
        }
    }
    cout << -1 << '\n';

}


int main() {
    fio
    freopen("testcase","r", stdin);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}