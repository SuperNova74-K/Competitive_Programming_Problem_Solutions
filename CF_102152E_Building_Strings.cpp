// أبدأ بسم الله مستعينا        راض به مُدّبر معينا
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 28/Sep/2022 on 11:40:14
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_102152E_Building_Strings

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;

template<typename generic, typename also_generic>
long double minof(generic a, also_generic b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

void solve() {
    string a,b,c;
    ll n,m; cin >> n >> m;
    cin >> a >> b >> c;
    unordered_map<char,short>mp;
    for (int i = 0; i < n; ++i) {
        if(mp.count(a[i])){
            mp[a[i]] = minof(mp[a[i]], b[i]-'0');
        }else{
            mp[a[i]] = b[i]-'0';
        }
    }
    ll answer = 0;
    for (int i = 0; i < m; ++i) {
        if(mp.count(c[i])){
            answer += mp[c[i]];
        }else{
            cout << -1 << newline;
            return;
        }
    }
    cout << answer << newline;
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