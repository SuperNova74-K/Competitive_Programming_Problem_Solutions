// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 17:47:59
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1629A_Download_More_RAM

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll>>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].second;
    }
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < n; ++i) {
        if(vec[i].first <= k){
            k+= vec[i].second;
        }else{
            break;
        }
    }
    cout << k << '\n';
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