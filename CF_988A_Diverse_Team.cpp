// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 03/Sep/2022 on 10:15:29
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_988A_Diverse_Team

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    fio


    ll n , k; cin >> n >> k;
    unordered_set<ll>set;
    vector<ll>vec;
    ll temp;
    for (int i = 0; i < n && vec.size() < k; ++i) {
        cin >> temp;
        if(not set.count(temp)){
            vec.push_back(i+1);
            set.insert(temp);
        }
    }

    if(vec.size() == k){
        cout << "YES\n";
        for (int i = 0; i < vec.size(); ++i) {
            cout << vec[i] <<' ';
        }
    }else{
        cout << "NO";
    }

    return 0;
}