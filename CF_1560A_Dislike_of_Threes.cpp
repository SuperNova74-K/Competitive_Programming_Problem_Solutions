// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 24/Sep/2022 on 22:05:14
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1560A_Dislike_of_Threes

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve(){
    ll k; cin >> k;
    for (int i = 1; i <= k; ++i) {
        if(i % 3 == 0 || i % 10 == 3){
            k++;
        }
    }
    cout << k << newline;
}


int main() {
    fio

    int t;cin >> t;
    while(t--){
        solve();
    }

    return 0;
}