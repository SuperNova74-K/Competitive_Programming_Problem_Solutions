// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 02/Sep/2022 on 14:09:36
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_637B_Chat_Order
// The one which will be top is the last one who sent a message
// Translation : loop over the array of strings given from back to front and print the person only once


#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



bool lol(const pair<string , ll>&a,const pair<string , ll>&b){
    return (a.second < b.second);
}

int main() {
    fio

    ll n; cin >> n;
    string arr[n];
    unordered_set<string>set;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        set.insert(arr[i]);
    }

    for (int i = n-1; i >= 0; --i) {
        if(set.count(arr[i])){
            cout << arr[i] << '\n';
            set.erase(arr[i]);
        }
    }


    return 0;
}