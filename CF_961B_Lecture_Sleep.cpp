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
    vector<ll>lecture(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> lecture[i];
    }
    vector<ll>mishka(n+1);
    for (int i = 1; i <=n ; ++i) {
        cin >> mishka[i];
    }
    vector<ll>prefix_zero(n+1);
    lecture[0]=0;
    mishka[0]=0;
    prefix_zero[0]=0;

    for (int i = 1; i <= n ; ++i) {
        if(not mishka[i]){
            prefix_zero[i]+=lecture[i];
        }
        prefix_zero[i] += prefix_zero[i-1];
    }

    ll l = 1,r = k;
    ll answer =-20;
    while(r <= n){
        answer = max(answer, prefix_zero[r] - prefix_zero[l-1]);
        l++;
        r++;
    }
    for (int i = 1; i <= n; ++i) {
        answer += lecture[i] * (mishka[i]);
    }
    cout << answer;


    return 0;
}