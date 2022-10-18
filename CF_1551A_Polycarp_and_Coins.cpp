// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 21/Sep/2022 on 16:41:37
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1551A_Polycarp_and_Coins

#include<bits/stdc++.h>
#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve(){
    ll n; cin >> n;
    ll remainder = n % 3;
    n-=remainder;
    ll first = n/3 , second = n/3;
    cout << first + (remainder == 1) << spacebar << second + ( remainder == 2) << newline;
}


int main(){
    fio
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}