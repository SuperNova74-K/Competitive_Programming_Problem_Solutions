// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 04/Sep/2022 on 18:03:29
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem SPOJ_PQUEUE_Printer_Queue

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void solve() {
    ll n , m; cin >> n >> m;
    queue<pair<ll ,ll>>vec;
    ll temp, answer = 0;
    priority_queue<ll>pr;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        pr.push(temp);
        vec.emplace(temp, i);
    }

    while(true){
        if(vec.front().first == pr.top()){
            if(vec.front().second == m){
                answer++;
                break;
            }else{
                vec.pop();
                pr.pop();
                answer++;
            }
        }else{
            vec.push(vec.front());
            vec.pop();
        }
    }
    cout << answer << '\n';
}


int main() {
    fio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}