// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 15/Sep/2022 on 14:51:17
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_371C_Hamburgers

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

bool yes(ll price[],ll have[],ll needed[], ll midpoint, ll r){
    ll sum = 0;
    for (int i = 0; i < 3; ++i) {
        if(have[i] < needed[i] * midpoint){
            sum += (needed[i] * midpoint - have[i]) * price[i];
        }
    }
    if(sum <= r) return true;
    return false;
}

int main() {
    fio

    string recipe;cin >> recipe;
    ll needed[3]{0};
    ll have[3]{0};
    ll price[3]{0};
    for(char i : recipe){
        if(i == 'B'){
            needed[0]++;
        }else if (i == 'S'){
            needed[1]++;
        }else{
            needed[2]++;
        }
    }
    for (int i = 0; i < 3; ++i) {
        cin >> have[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin >> price[i];
    }
    ll money; cin >> money;
    ll l = 0,r = 1e13, midpoint;
    ll answer = 0;
    while(l <= r){
        midpoint = (l+r)/2;

        if(yes(price, have, needed, midpoint, money)){
            l = midpoint+1;
            answer = max(answer, midpoint);
        }else{
            r = midpoint-1;
        }

    }
    cout << answer;

    return 0;
}