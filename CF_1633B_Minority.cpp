// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 16:17:56
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1633B_Minority

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    string lol; cin >> lol;
    ll n = lol.size();
    lol = '0' + lol;
    vector<ll>zeros(lol.size());
    vector<ll>ones(lol.size());
    zeros[0] = ones[0] = 0;
    for (int i = 1; i < lol.size(); ++i) {
        bool bl = (lol[i] == '1');
        ones[i] = ones[i-1] + bl;
        zeros[i] = zeros[i-1] + !bl;
    }
    ll cntr = 0;
    while(ones[n]-ones[cntr] == zeros[n] - zeros[cntr]){
        cntr++;
    }
    ll answer = 0;
    if(cntr != n - 1){
        answer = min(ones[n]-ones[cntr] , zeros[n] - zeros[cntr]);
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