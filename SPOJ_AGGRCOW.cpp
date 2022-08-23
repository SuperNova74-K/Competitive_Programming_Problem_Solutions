//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n ,c; cin >> n >> c;
    vector<ll>vec(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());

    ll l = 1 ,r = 1e9 , midpoint, answer;
    while(l <= r){
        midpoint = (l+r)/2;

        ll nxt = -1,num = 0, cntr = 0;
        while(cntr < n){
            if(vec[cntr] >= nxt){
                num++;
                nxt =  vec[cntr] + midpoint;
            }
            cntr++;
        }

        if( num >= c){
            answer = midpoint;
            l = midpoint+1;
        }else{
            r = midpoint-1;
        }

    }
    cout << answer << '\n';

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