// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 20/Sep/2022 on 18:22:07
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_296C_Greg_and_Array

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;

void apply_operation(ll & l , ll & r, ll value, vector<ll>&v2, ll & n,ll multiple = 1){
    v2[l] += value * multiple;
    if(r < n) v2[r+1] -= value * multiple;
}

int main() {
    fio

    ll n,m,k; cin >> n >> m >> k;
    vector<ll>v(n+1);
    vector<ll>v2(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
//    ll l,r,value;
    ll arr[m+1][4];
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin >> arr[i][j];
        }
    }
    ll x,y;
    vector<ll>operations_frequency(m+1);
    for (int i = 0; i < k; ++i) {
        cin >> x >> y;
        apply_operation(x,y,1LL,operations_frequency, m);

    }
    for (int i = 1; i <= m; ++i) {
        operations_frequency[i] += operations_frequency[i-1];
        apply_operation(arr[i][1],arr[i][2],arr[i][3], v2, n , operations_frequency[i]);
    }
    for (int i = 1; i <= n; ++i) {
        v2[i]+=v2[i-1];
        cout << v[i] + v2[i] << spacebar;
    }

    return 0;
}