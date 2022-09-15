// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 30/Aug/2022 on 13:46:11
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_372A_Counting_Kangaroos_is_Fun

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n; cin >> n;
    ll answer = 0;
    vector<ll>vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    ll l = 0,r = n/2 + (n&1);
    std::sort(vec.rbegin(), vec.rend());
    while(r<n){
        if(vec[l] >= vec[r] * 2){
            l++;
            r++;
            answer++;
        }else{
            r++;
        }
    }

    cout << n - answer;

    return 0;
}