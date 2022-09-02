// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 01/Sep/2022 on 12:38:32
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem SPOJ_HRECURS_Hello_Recursion

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


ll solve(vector<ll>vec) {
    if(vec.size() == 1){
        return vec[0];
    }
    ll temp = vec[vec.size()-1];
    vec.pop_back();
    return temp + solve(vec);
}


int main() {
    fio

    int t,n;
    cin >> t;
    ll cntr = 1;
    while (t--) {
        cin >> n;
        vector<ll>vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        cout << "Case " << cntr++ << ": " << solve(vec) << '\n';
    }

    return 0;
}