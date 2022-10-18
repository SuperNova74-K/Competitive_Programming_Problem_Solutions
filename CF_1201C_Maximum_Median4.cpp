// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 17/Sep/2022 on 10:59:51
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1201C_Maximum_Median4

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;


int main() {
    fio

    ll n, k; cin >> n >> k;
    vector<ll>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    if(n == 1){
        cout << v[0]+k;
        return 0;
    }

    ll indx = n/2;
    ll l = 0,r = 5e9, midpoint, answer = 0;
    while(l<=r){
        midpoint = (l+r)/2;

        ll k_duplicate = k;
        // checker
        for (int i = indx+1; i < n; ++i) {
            if(k_duplicate < 0){
                break;
            }
            k_duplicate-= max(0LL,midpoint-v[i]);
        }

        if(k_duplicate < 0 || k_duplicate+v[indx]<midpoint){
            r = midpoint-1;
        }else{
            answer = max(answer, midpoint);
            l = midpoint+1;
        }

    }
    cout << answer;

    return 0;
}