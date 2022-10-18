// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 10/Sep/2022 on 12:09:18
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1473B_String_LCM

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
   string one, two; cin >> one >> two;
   ll lcm = (ll) one.size() * (ll)two.size()  / __gcd((ll)one.size(), (ll)two.size());
   string check1;
   for (int i = 0; i < lcm / one.size(); ++i) {
       check1+= one;
   }
   string check2;
   for (int i = 0; i < lcm / two.size(); ++i) {
       check2+= two;
   }
   if(check1 == check2){
       cout << check1;
   }else{
       cout << -1;
   }
   cout << '\n';
}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}