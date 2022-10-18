// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 10/Sep/2022 on 15:37:23
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_371B_Fox_Dividing_Cheese

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;


ll turn_to(ll n,ll target){
    ll steps = 0;
    if(n%target!=0){
        return -1;
    }

    ll to_factor = n/target;
    for (int i = 2; i <= 5; ++i) {
        if(to_factor!=1) {
            ll cntr = 0;
            while (to_factor % i == 0) {
                to_factor /= i;
                cntr++;
            }
            steps+=cntr;
        }else{
            return steps;
        }

        if(i == 3){
            i++;
        }
    }
    if(to_factor == 1)return steps;
    return -1;
}


int main() {
    fio

    ll a,b; cin >> a >> b;
    ll g = __gcd(a,b);
    if(a==b){
        cout << 0;
        return 0;
    }
    ll steps1 = turn_to(a,g);
    ll steps2 = turn_to(b,g);
    if(steps1 != -1 && steps2 != -1){
        cout << steps1 + steps2;
    }else{
        cout << -1;
    }


    return 0;
}