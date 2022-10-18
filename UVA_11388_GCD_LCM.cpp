// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 09/Sep/2022 on 23:07:05
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem UVA_11388_GCD_LCM

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;



int main() {
    fio

    ll g,l,t;
    cin >> t;
    while (t--) {
        cin >> g >> l;
        ll gcdd = __gcd(g,l);
        if(gcdd == g && (g*l)/gcdd == l ){
            cout << g << ' ' << l << '\n';
        }else{
            cout << -1 << '\n';
        }
    }

    return 0;
}