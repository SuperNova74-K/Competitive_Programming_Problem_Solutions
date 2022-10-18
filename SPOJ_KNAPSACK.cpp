// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 01/Sep/2022 on 13:03:23
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem SPOJ_KNAPSACK


// THIS IS NOT A PROPER SOLUTION , TLE !!
// DONE IT FOR EDUCATIONAL PURPOSES

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

// first is weight , second is value

ll w[2000];
ll v[2000];

ll temp;
ll solve(ll indx, ll remaining) {

    if(indx == temp){
        return 0;
    }

    ll take=0;
    ll leave=0;
    if(remaining - w[indx] >= 0){
        take = v[indx] + solve(indx + 1, remaining - w[indx]);
    }
    leave = solve(indx + 1, remaining);

    return max(take, leave);
}


int main() {
    fio
    ll s,n;
    cin >> s >> n;
    temp = n;
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> v[i];
    }

    cout << solve(0, s);

    return 0;
}