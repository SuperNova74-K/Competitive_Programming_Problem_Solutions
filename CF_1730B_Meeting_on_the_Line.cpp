// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 25/Sep/2022 on 17:41:20
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1730B_Meeting_on_the_Line

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

bool comb(pair<ll,ll>&a,pair<ll,ll>&b){
    return (a.first<b.first);
}

void solve() {
    ll n;cin >> n;
    vector<pair<ll,ll>>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> v[i].second;
    }
    long double l = 0,r =1e8, midpoint, min_time = LLONG_MAX, time;
    for (int i = 0; i < 150; ++i) {
        midpoint = (l+r)/2;
        time = 0;
        for (int j = 0; j < n; ++j) {
            time=max(time,abs((long double)v[i].first-midpoint) + v[i].second);
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