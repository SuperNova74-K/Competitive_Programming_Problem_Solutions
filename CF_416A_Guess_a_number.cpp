// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 17/Sep/2022 on 03:50:23
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_416A_Guess_a_number!

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;



int main() {
    fio

    ll n; cin >> n;
    ll lower = INT32_MIN , upper = INT32_MAX;
    string lol;
    char answer;
    ll num;
    for (int i = 0; i <n; ++i) {
        cin >> lol >> num >> answer;

        if(lol.size() == 1){
            if(lol == "<"){
                if(answer == 'Y'){
                    upper = min(upper,num-1);
                }else{
                    lower = max(num,lower);
                }
            }else{
                if(answer == 'Y'){
                    lower = max(num+1, lower);
                }else{
                    upper = min(num, upper);
                }
            }
        }else{
            if(lol[0] == '<'){
                if(answer == 'Y'){
                    upper = min(num, upper);
                }else{
                    lower = max(num+1, lower);
                }
            }else{
                if(answer == 'Y'){
                    lower = max(num, lower);
                }else{
                    upper = min(num-1, upper);
                }
            }
        }
    }
    if(lower <= upper){cout << (lower+upper)/2 ;}else{cout << "Impossible";}
    return 0;
}