// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 09/Sep/2022 on 16:25:07
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_75C_Modified_GCD

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;




int main(){
    fio

    ll a,b; cin >> a >> b;
    ll g = gcd(a,b);
    vector<ll>divisors;
    for (int i = 1; i*i <=g; ++i) {
        if(g%i==0){
            divisors.push_back(i);
            if(i!=g/i) divisors.push_back(g/i);
        }
    }
    std::sort(divisors.begin(), divisors.end());

    int t; cin >> t;
    while(t--){
        ll l,h; cin >> l >> h;
        int answer = -1;
        for (int i = divisors.size()-1; i >=0 ; --i) {
            if(divisors[i]<=h && divisors[i]>=l){
                answer = i;
                break;
            }
        }
        if(answer != -1)
        cout << divisors[answer] << '\n';else cout << -1<<'\n';
    }

    return 0;
}