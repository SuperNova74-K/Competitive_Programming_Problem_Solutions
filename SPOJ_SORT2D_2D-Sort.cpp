// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 17:53:19
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem SPOJ_SORT2D_2D-Sort

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

bool comparator(const pair<ll,ll>&a , const pair<ll,ll> & b){
    if(a.first == b.first){
        return (a.second > b.second);
    }else{
        return (a.first < b.first);
    }
}

void solve() {
    ll n; cin>> n;
    vector<pair<ll,ll>>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].first >> vec[i].second;
    }
    std::sort(vec.begin(), vec.end(), comparator);
    for (int i = 0; i < n; ++i) {
        cout << vec[i].first << ' ' << vec[i].second << '\n';
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