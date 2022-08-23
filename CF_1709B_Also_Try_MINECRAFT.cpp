//
// Created by Khaled Waleed on 14-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n,m; cin >> n >> m;
    vector<ll>heights(n+1);
    vector<ll>prefix_jump(n+1);
    vector<ll>suffix_jump = prefix_jump;

    for (int i = 1; i <= n; ++i) {
        cin >> heights[i];
        prefix_jump[i] = (heights[i-1] - heights[i]) * (heights[i] < heights[i-1]);
        prefix_jump[i] += prefix_jump[i-1];
    }

    std::reverse(heights.begin()+1, heights.end());

    for (int i = 1; i <= n; ++i) {
        suffix_jump[i] = (heights[i-1] - heights[i]) * (heights[i] < heights[i-1]);
        suffix_jump[i] += suffix_jump[i-1];
    }

    ll l ,r;
    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        if(l <= r){
            cout << prefix_jump[r] - prefix_jump[l] <<'\n';
        }else{
            cout << suffix_jump[n+1-r] - suffix_jump[n+1-l] << '\n';
        }
    }

    return 0;
}