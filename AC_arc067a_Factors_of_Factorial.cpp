// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 06/Sep/2022 on 18:48:39
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem AC_arc067a_Factors_of_Factorial

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

/* the idea is that for example if n = 6 then
 * n! = 1 * 2 * 3 * 4* 5 * 6
 * if you get the prime factorization of every number it will be
 * 1 = 2^0
 * 2 = 2
 * 3 = 3
 * 4 = 2 * 2
 * 5 = 5
 * 6 = 2 * 3
 *
 * if you multiply all of that with each other it will be
 * (2^4) * (3^2) * (5^1) --> equation one
 * how is that gonna be helpful ?
 * well , if you think of 7^3 then the divisors are 7^0 , 7^1 ,7^2 ,7^3  right ?
 * then the number of divisors is the power + 1
 * now , if you take 36 as an example , the factorization is (2^A) * (3^B)
 * where  0<= A,B <=2
 * meaning that the 2 can have three values(possibility) : 2^0 , 2^1 , 2^2, same thing with 3
 * so we have total possibilities of 3 * 3 = 9  which is the number of divisors of 36 !!
 * now we get back to our euqtion one , we have the powers of every prime factor right ?
 * we add one to each of them then multiply all of them and get the answer right away (don't forget the mod) !
 * instead of doing prime factorization for each of them , we use sieve of eratosthenes
 * to get the frequency of each prime factor
*/
const ll mod = 1e9+7;

void sieve(vector<bool>&vec, vector<ll>&freq, ll & n){
    vec[0] = vec[1] = false;
    for (int i = 2; i <= n; ++i) {
        if(vec[i]){
            freq[i]++;
            for (int j = i+i; j <= n ; j+=i) {
                vec[j] = false;
                ll temp = j;
                while(temp%i==0){
                    freq[i]++;
                    temp/=i;
                }
            }

        }
    }
}

int main() {
    fio
    ll n; cin >> n;
    vector<bool>vec(n+1 , true );
    vector<ll>freq(n+1);
    vec[0] = vec[1] = true;
    sieve(vec, freq, n);
    ll answer = 1;
    for (int i = 2; i <= n; ++i) {
        if(vec[i]){
            answer = (answer * (freq[i]+1)) % mod;
        }
    }
    cout << answer;

    return 0;
}