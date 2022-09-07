// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 07/Sep/2022 on 15:30:29
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem UVA_10924_Prime_Words

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

const int limit = 1050;
bool prime[limit]={false};

void sieve() {
    memset(prime,1,sizeof(prime));
    prime[0] = 0;
    for (int i = 2; i < limit ; ++i) {
        if(prime[i]){
            for (int j = i+i; j < limit; j+=i) {
                prime[j] = false;
            }
        }
    }
}


int main() {
    fio
    sieve();
    string lol;
    while(cin >> lol){
        ll sum = 0;
        for (char i : lol) {
            if( i <= 'Z'){
                sum += i-'A'+ 27;
            }else{
                sum += i - 'a' +1;
            }
        }
        if(prime[sum]){
            cout << "It is a prime word.\n";
        }else{
            cout << "It is not a prime word.\n";
        }
    }

    return 0;
}