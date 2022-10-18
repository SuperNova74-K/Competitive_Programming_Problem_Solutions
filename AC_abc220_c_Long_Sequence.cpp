// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 28/Sep/2022 on 10:42:23
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem AC_abc220_c_Long_Sequence

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

    ll n, sum{0};cin >> n;
    vll v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum+=v[i];
    }
    ll x; cin >> x;
    ll answer = 0;
    if(x>sum){
        answer += (x/sum);
        x-=answer*sum;
        answer*=n;
    }
    ll second_sum = 0;
    for (int i = 0; i < n; ++i) {
        second_sum+=v[i];
        if(second_sum > x){
            answer += i+1;
            break;
        }
    }
    cout << answer;

    return 0;
}