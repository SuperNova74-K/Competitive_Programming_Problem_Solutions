// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 01/Sep/2022 on 16:26:56
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem UVA_524_Prime_Ring_Problem

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool isprime( ll num){
    unordered_set<ll>primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    return primes.count(num);
}

ll n;


vector<ll>subset;
unordered_set<ll>taken;


//bool is_subset_prime(){
//    bool state{true};
//    for (int i = 0; i < n-1; ++i) {
//        if(not isprime(subset[i] + subset[i+1])){
//            state = false;
//            break;
//        }
//    }
//    if(not isprime(subset[0] + subset[n-1])){
//        state = false;
//    }
//    return state;
//}
bool printed = false;

void solve(ll digits = 0) {
    if(digits == n){
        printed = true;
//           if(true){
        for (int i = 0; i < n-1; ++i) {
            cout << subset[i] << ' ';
        }
        cout << subset[n-1] << endl;

        return;
    }

    for (int i = 2; i <= n; ++i) {
        if(taken.count(i)){
            continue;
        }
        bool check;
        if(digits == n-1 ){
            check = (isprime(i + 1) && isprime(subset[digits-1]+i));
        }else{
            check = (isprime(i + subset[digits-1]));
        }

        if(check){
            subset.push_back(i);
            taken.insert(i);
            solve(digits+1);
            subset.pop_back();
            taken.erase(i);
        }
    }
}


int main() {
    fio
    ll cntr = 1;
    freopen("ok.txt", "wt", stdout);
    while (cin >> n) {
        printed = false;
        cout << "Case " << cntr << ':' << endl;
        subset.push_back(1);
        solve(1);
        subset.clear();
        taken.clear();
        cntr++;
        if (printed) cout << endl;
        if(not printed)cout << endl;
    }

    return 0;
}
