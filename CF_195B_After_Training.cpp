// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 02/Oct/2022 on 08:56:26
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_195B_After_Training

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


    ll n,m;
    cin >> n >> m;


    ll prev = (m + 2 - 1)/2;
    ll cntr = 0;
    ll second_prev = prev, sign = -1;
    if((m&1) == 0){
        sign *= -1;
    }
        cout << prev << newline;
        for(int i = 1; i < n; i++){
             if(i % m == 0){
                 second_prev = prev;
                 cout << prev << newline;
             }else{
                 cout << second_prev + (sign)*(i%m) << newline;
                 second_prev = second_prev + (sign)*(i%m);
                 if(not(m%2==0 && i%m==m-1)) sign *= -1;
             }
        }




    return 0;
}