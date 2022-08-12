//
// Created by Khaled Waleed on 04-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,a,b;
    cin >> n >> a >> b;
    string str; cin >> str;
    ll answer = 0, cntr = 1;
    for (int i = 1; i < str.size(); ++i) {
        if(str[i] == str[i-1]){
            cntr++;
        }else{
            if (b <= 0) {
                answer += (a * cntr + b);
            } else {
                answer += ((b + a) * cntr);
            }
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