// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 07/Sep/2022 on 16:40:00
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_236B_Easy_Number_Challenge

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

int const limit = 1e6;

// note that there is a rule that says..
// if the prime factorization of a number is p^a * p2^b + p3^c ......
// where p1,2,3.. is prime numbers then the number of divisors of that number is
// (a+1) * (b+1) * (c+1).....
// if you want some more info visit this link https://math.stackexchange.com/questions/2877738/why-multiplying-powers-of-prime-factors-of-a-number-yields-number-of-total-divis
// problem AC_arc067a_Factors_of_Factorial form atcoder judge uses similar concept
// you can find me solution for it here: https://github.com/SuperNova74-K/Competitive_Programming_Problem_Solutions/blob/main/AC_arc067a_Factors_of_Factorial.cpp


// for this particular solution we use sieve of eratosthenes to pre-calculate the devisors of all the numbers
// up to 1e6 , then we just substitute in the summation


// first is if it's  prime or not for sieve to work , second is number of devisor
void sieve(vector<pair<bool,ll>>&vec) {
    vec[0].first = vec[1].first = false;
    for (int i = 2; i <= limit; ++i) {
        if(vec[i].first){
            vec[i].second++;
            for (int j = i+i; j <= limit; j+=i) {
                vec[j].first = false;
                ll temp = j, cntr=0;
                while(temp % i == 0){
                    cntr++;
                    temp/=i;
                }
                vec[j].second *= (cntr+1);
            }
        }
    }
}

const ll mod = 1073741824;

int main() {
    fio
    vector<pair<bool,ll>>vec(limit+1,{true,1});
    sieve(vec);
    ll a,b,c, sum = 0; cin >> a >> b >> c;
    for (int i = 1; i <= a ; ++i) {
        for (int j = 1; j <=b; ++j) {
            for (int k = 1; k <=c; ++k) {
                sum += vec[i*k*j].second;
                sum %= mod;
            }
        }
    }
    cout << sum;

    return 0;
}