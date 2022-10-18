// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 28/Sep/2022 on 11:18:28
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_102152C_Large_GCD

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;



ll fastpow(const ll & base,const ll & pow, ll mod = 1e9+7){
    if(not pow){
        return 1;
    }
    if(pow&1){
        return ((base%mod) * fastpow(base,pow-1,mod))%mod;
    }
    ll temp = fastpow(base,pow/2, mod)%mod;
    return (temp * temp) % mod;
}

void solve() {



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