// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 18/Sep/2022 on 13:26:35
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1613C_Poisoned_Dagger

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n,h; cin >> n >> h;
    vector<ll>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
                  //1e18
    ll l = 0, r = 1e18,midpoint, damage = 0, answer = LLONG_MAX;
    while(l <= r){
        midpoint = (l+r)/2;

        // check
        damage = 0;
        for (int i = 0; i < n-1; ++i) {
            if(v[i] + midpoint-1 >= v[i+1]){
                damage += v[i+1] - v[i];
            }else{
                damage += midpoint;
            }
        }
        damage += midpoint;

        if(damage >= h){
            r = midpoint-1;
            answer = min(answer, midpoint);
        }else{
            l = midpoint+1;
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