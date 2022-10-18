// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 27/Sep/2022 on 17:23:13
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_225A_Dice_Tower

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;




int main() {
    fio

    ll n; cin >> n;
    ll top; cin >> top;
    vint v(n);
    vint v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i] >> v2[i];
    }
    ll mustbe = 7-top;
    for (int i = 1; i < n; ++i) {
        if(v[i] == mustbe || v2[i] == mustbe || 7-v[i]==mustbe || 7-v2[i]==mustbe){
            cout << "NO" << newline;
            return 0;
        }
    }
    cout << "YES";

    return 0;
}