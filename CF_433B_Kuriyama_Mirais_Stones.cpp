// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 20/Sep/2022 on 16:29:15
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_433B_Kuriyama_Mirais_Stones

#include<bits/stdc++.h>
#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;




int main(){
    fio
    
    ll n; cin >> n;
    vector<ll>v(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    vector<ll>v2{v};
    for (int i = 1; i <= n; ++i) {
        v[i]+=v[i-1];
    }
    std::sort(v2.begin(), v2.end());
    for (int i = 1; i <= n; ++i) {
        v2[i]+=v2[i-1];
    }
    ll m, l ,r; cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> n >> l >> r;
        if(n == 1){
            cout << v[r]-v[l-1] << newline;
        }else{
            cout << v2[r]-v2[l-1] << newline;
        }
    }



    return 0;
}