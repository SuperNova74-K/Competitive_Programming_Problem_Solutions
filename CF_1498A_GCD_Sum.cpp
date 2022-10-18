// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 22/Sep/2022 on 13:13:03
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1498A_GCD_Sum

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n; cin >> n;
    for (int i = 0; i < 3; ++i) {
        ll digits = 0, secondn = n;
        while(secondn!=0){
            digits += secondn % 10;
            secondn/=10;
        }
        if(gcd(digits, n) > 1){
            cout << n << newline;
            return;
        }
        n++;
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