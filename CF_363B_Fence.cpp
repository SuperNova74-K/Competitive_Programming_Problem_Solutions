//
// Created by Khaled Waleed on 14-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n,k; cin >> n >> k;
    vector<ll>vec(n+1);
    vec[0]=0;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i+1];
    }
    for (int i = 1; i <= n; ++i) {
        vec[i] += vec[i-1];
    }
    ll l = 1,r = k;
    pair<ll,ll>answer;
    answer.first = INT_MAX;
    while(r <= n){
        if( vec[r] - vec[l-1] < answer.first){
            answer.first = vec[r]-vec[l-1];
            answer.second = l;
        }
        r++;
        l++;
    }
    cout << answer.second;

    return 0;
}