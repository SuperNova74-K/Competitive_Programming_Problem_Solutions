//
// Created by Khaled Waleed on 16-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {

    ll x, arr[3];
    cin >> x >> arr[0] >> arr[1] >> arr[2];
    ll cntr = 0;
    x++;
    while(x>0){
        x-=arr[cntr];

        if(x<=0){
            if(cntr == 0){
                cout << "GREEN\n";
            }else if(cntr == 1){
                cout << "YELLOW\n";
            }else{
                cout << "RED\n";
            }
            break;
        }

        cntr++;
        cntr%=3;
    }

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