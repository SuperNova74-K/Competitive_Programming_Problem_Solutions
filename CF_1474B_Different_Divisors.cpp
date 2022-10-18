// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 22/Sep/2022 on 14:43:32
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1474B_Different_Divisors

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

struct number{
    bool isprime = true;
    int num_of_divisors{1};
    int last_divisor_found{1};
    int min_diffirence = INT32_MAX;
};

void sieve(vector<number>&v) {
    for (int i = 2; i < 1e6 + 1; ++i) {
        if(v[i].isprime){
            v[i].num_of_divisors++;
            v[i].min_diffirence = min(v[i].min_diffirence, i - v[i].last_divisor_found);
            for (int j = i+i; j < 1e6 + 1; j+=i) {
                v[j].isprime = false;

                ll cntr = 0;
                ll j_duplicate = j;
                while(j%i == 0){
                    cntr++;
                    j/=i;
                }

                v[j].num_of_divisors++;
                v[j].min_diffirence = min(v[j].min_diffirence, i - v[j].last_divisor_found);
            }
        }
    }
}


int main() {
    fio

    int t,d;
    cin >> t;
//    vector<ll>v(1e6 + 1,{1,1});
    vector<number>v(1e6);
    v[0].isprime = v[1].isprime = false;
    sieve(v);
    while (t--) {
        cin >> d;
        for (int i = 6; i < 1e6+1; ++i) {
            if(v[i].min_diffirence >= d && v[i].num_of_divisors >= 4){
                cout << i << newline;
                break;
            }
        }
    }

    return 0;
}