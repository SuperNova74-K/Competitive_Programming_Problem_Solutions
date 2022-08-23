//
// Created by Khaled Waleed on 22-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,k; cin >> n >> k;
    string lol; cin >> lol;
    lol = '9' + lol;
    vector<ll>vec(n+k+2);
    for (int i = 1; i <= n ; ++i) {
        if(lol[i] == '1'){
            vec[k+i+1]--;
            if(i-k < 1){
                vec[1]++;
            }else{
                vec[i-k]++;
            }
        }
    }
    for (int i = 1; i <= vec.size()-1; ++i) {
        vec[i] += vec[i-1];
    }
    ll answer = 0;
    for (int i = 1; i <= vec.size()-2-k; ++i) {
        if(vec[i] == 0){
            answer++;
            i+=k;
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