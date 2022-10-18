// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 25/Sep/2022 on 17:32:32
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1730A_Planets

#include<bits/stdc++.h>
#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve(){
    ll n,c; cin >> n >> c;
    vector<int>v(101);
    ll temp, answer = 0;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        v[temp]++;
    }
    for (int i = 0; i < 101; ++i) {
    answer += min(v[i], (int)c);
    }
    cout << answer << newline;
}


int main(){
    fio
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}