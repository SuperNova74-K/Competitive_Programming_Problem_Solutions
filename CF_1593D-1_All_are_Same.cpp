// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 11/Sep/2022 on 14:27:40
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1593D-1_All_are_Same

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

ll lcm(ll first, ll second){
    return first * (second / __gcd(first, second));
}


void solve() {
    ll n; cin >> n;
    vector<ll>vec(n);
    ll mn = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    std::sort(vec.begin(), vec.end());
    if(vec[0] == vec[n-1]){
        cout << -1 << '\n';
        return;
    }
    mn = vec[0];
    ll g = 0;
    for (int i = 0; i < n; ++i) {
        if(vec[i]!=mn){
            g = __gcd(abs(vec[i]-mn), g);
        }
    }
    cout << g << '\n';
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