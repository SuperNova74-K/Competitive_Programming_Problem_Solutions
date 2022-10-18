// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 14/Sep/2022 on 20:33:45
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1369C_RationalLee

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n,k; cin >> n >> k;
    vector<ll>integers(n);
    vector<pair<ll,ll>>friends(k);

    for (int i = 0; i < n; ++i) {
        cin >> integers[i];
    }

    for (int i = 0; i < k; ++i) {
        cin >> friends[i].first;
    }

    std::sort(friends.begin(), friends.end());
    std::sort(integers.rbegin(), integers.rend());

    ll cntr = 0;
    for (int i = 0; i < k; ++i) {
        friends[i].second = integers[cntr];
        cntr++;
    }

    ll happiness = 0;

    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < friends[i].first-1; ++j) {
            if(j == friends[i].first-2) friends[i].second+=integers[cntr];
            cntr++;
        }
        happiness += friends[i].second;
        if(friends[i].first == 1)happiness += friends[i].second;
    }

    cout << happiness << '\n';

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