// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 16/Sep/2022 on 15:10:21
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_101028I_March_Rain

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n,k, temp; cin >> n >> k;
    vector<ll>roof(n);
    for (int i = 0; i < n; ++i) {
        cin >> roof[i];
    }

    ll l = 1 , r = 1e9, midpoint, answer = 1e5+5;
    while(l<=r){
        midpoint = ( l + r ) / 2;

        // to check
        ll pntr = 0, value = 0, strips = 0;
        while(pntr < n){
            pntr = lower_bound(roof.begin() + pntr , roof.end(), value) - roof.begin();
            value = roof[pntr] + midpoint;
            if(pntr != n) strips++;
        }

        if(strips > k){
            l = midpoint+1;
        }else{
            r = midpoint-1;
            answer = midpoint;
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