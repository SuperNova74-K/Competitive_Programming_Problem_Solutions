// أبدأ بسم الله مستعينا        راض به مُدّبر معينا      
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد  
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 27/Aug/2022 on 17:03:58
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1721B_Deadly_Laser

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int n,m,x,y,d;
    cin >> n >> m >> x >> y >> d;

    bool arr[1001][1001]{0};
    
//    arr[x][y]==1;
//    for (int i = x-d; i <= x+d; ++i) {
//        arr[i][y] = true;
//    }
//    for (int i = y-d; i <= y+d; ++i) {
//        arr[x][i] = true;
//    }
//
//    int a = 0 , b = 0;
//    while(true){
//        if(a!=1000 && b!=1000){
//            // if we cannot move, game ends
//            if(arr[a][b+1] == 1 && arr[a+1][b] == 1){
//                cout << -1 << '\n';
//                return;
//            }
//            if(y <= m/2){
//                b++;
//            }else{
//
//            }
//        }
//    }

    // this is basically a shitty solution.

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