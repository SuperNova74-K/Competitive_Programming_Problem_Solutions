// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 03/Nov/2022 on 15:31:26
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_768A_Oath_of_the_Night's_Watch

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define YES "YES"
#define NO "NO"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
#define fillv for (int i = 0; i < n; ++i) {cin >> v[i];}

using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;



int main() {
    fio

    ll n; cin >> n;
    vint v(n);
    int mn = INT32_MAX,mx = -1;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        mn = min(mn,v[i]);
        mx = max(mx,v[i]);
    }
    ll answer = 0;
    for (int i = 0; i < n; ++i) {
        if(v[i] > mn && v[i] < mx){
            answer++;
        }
    }
    cout << answer;

    return 0;
}