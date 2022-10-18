// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 31/Aug/2022 on 10:54:36
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CSES_1643_Maximum_Subarray_Sum

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
    fio

    ll n; cin >> n;
    vector<ll>vec(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }
    vec[0] = 0;


    ll answer = vec[0];
    ll maximum_vec = LLONG_MIN;
    for (int i = 1; i <= n ; ++i) {
        answer = max(vec[i], answer + vec[i]);
        maximum_vec = max(maximum_vec, answer);
    }
    cout << maximum_vec;


    return 0;
}