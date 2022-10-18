// أبدأ بسم الله مستعينا        راض به مُدّبر معينا
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 08/Sep/2022 on 15:40:53
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1717A_Madoka_and_Strange_Thoughts

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve(){
    ll n; cin >> n;
    cout << n + (n/2)*2 + (n/3)*2 << '\n';
}


int main(){
    fio
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}