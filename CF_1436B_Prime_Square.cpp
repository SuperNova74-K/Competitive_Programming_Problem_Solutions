// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 22/Sep/2022 on 13:42:54
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P

// This is a Solution for Problem CF_1436B_Prime_Square

#include<bits/stdc++.h>

#define ll long long
#define spacebar " "
#define newline '\n'
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)
using namespace std;
ll n;
void solve() {
    cin >> n;
    int arr[n][n];
    memset(arr, 0, sizeof arr);
//    int **arr = new int*[n];
//    for (int i = 0; i < n; ++i) {
//        arr[i] = new int[n]{0};
//    }
    for (int i = 0; i < n; ++i) {
        arr[i][i]  = 1;
        arr[i][n-i-1] = 1;
    }
    if(n&1){
        arr[(n/2) - 1][n/2] = 1;
        arr[(n/2) + 1][n/2] = 1;
        arr[n/2][(n/2) + 1] = 1;
        arr[n/2][(n/2) - 1] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << newline;
    }
//    for (int i = 0; i < n; ++i) {
//        delete[] arr[i];
//    }
//    delete[] arr;
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