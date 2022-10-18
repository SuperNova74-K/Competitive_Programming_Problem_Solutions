// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 27/Sep/2022 on 16:55:42
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem 1473A_Replacing_Elements

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
typedef vector<ll> vll;

void solve() {
    ll n,d;
    cin >> n >> d;
    vll v(n);
    bool needed = false;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if(v[i]>d){
            needed = true;
        }
    }
    if(not needed){
        cout << "YES\n";
        return;
    }
    std::sort(v.begin(), v.end());
    if(v[0] + v[1] <= d){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << newline;
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