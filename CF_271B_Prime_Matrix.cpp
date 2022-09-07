// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 07/Sep/2022 on 12:38:30
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_271B_Prime_Matrix

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

/*
 * we make a bool checker of all the primes in the limit range using sieve
 * then for every element in the matrix we calculate how many operations we have to do
 * to turn the element into a prime number
 *
 * then we calculate the total sum of moves needed for all the rows
 * and all the columns then we minimize as much as possible till we get the best answer
 *
 * note : I am using one based but you can use whatever you like :)
 */


const ll limit = 1e5+10;
void sieve(vector<bool>&prime) {
    prime[0] = prime[1] = false;
    for (int i = 2; i <= limit/i; ++i) {
        if(prime[i]){
            for (int j = i*i; j <= limit ; j+=i) {
                prime[j] = false;
            }
        }
    }
}


int main() {
    fio

    ll n , m; cin >> n >> m;
    int mat[501][501]{0};
    vector<bool>vec(limit, true);
    sieve(vec);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mat[i][j];

            ll start = mat[i][j];
            while (true) {
                if (vec[start]) {
                    break;
                }
                start++;
            }
            mat[i][j] = start - mat[i][j];
        }
    }

    ll horizontal = LLONG_MAX;
    for (int i = 1; i <= n; ++i) {
        ll sum = 0;
        for (int j = 1; j <= m; ++j) {
            sum += mat[i][j];
        }
        horizontal = min(horizontal, sum);
    }

    ll vertical = LLONG_MAX;
    for (int i = 1; i <= m; ++i) {
        ll sum = 0;
        for (int j = 1; j <= n; ++j) {
            sum += mat[j][i];
        }
        vertical = min(vertical, sum);
    }
    cout << min(vertical, horizontal);
    return 0;
}