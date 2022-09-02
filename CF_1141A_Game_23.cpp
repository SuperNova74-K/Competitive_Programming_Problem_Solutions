// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 01/Sep/2022 on 13:53:37
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1141A_Game_23
// BackTracking , we are generating all the possible combinations of multiples then returning
// the one which fits the target or -1 if we can't do it through all the combinations
#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

ll solve(ll num , ll target, ll steps) {
    if(num == target){
        return steps;
    }
    else if(num > target){
        return -1;
    }

    ll first =  solve(num * 2 , target , steps+1);
    ll second = solve(num * 3 , target , steps+1);

    if(first == -1){
        return second;
    }else{
        if(second == -1){
            return first;
        }else{
            return min(first , second);
        }
    }
}


int main() {
    fio

    ll num , target;
    cin >> num  >> target;
    cout << solve(num , target, 0);

    return 0;
}