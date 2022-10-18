// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 20/Sep/2022 on 06:51:02
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem AC_246D-2-variable_Function

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;



int main() {
    fio
    ll n; cin >> n;
    ll x = 8e18;
    ll i = 0 , j = 1e6;
    while(j>=i){
        ll f = i*i*i   +   i*i*j   +   j*j*i   +    j*j*j;
        if(f >= n){
            j--;
            x = min(x,f);
        }else{
            i++;
        }
    }

    cout << x;

    return 0;
}