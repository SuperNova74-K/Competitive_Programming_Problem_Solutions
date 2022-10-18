//
// Created by Khaled Waleed on 24-Aug-22
//

#include<bits/stdc++.h>

#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool is_prime( ll num){

    for (int i = 2; i * i <= num; ++i) {
        if(num % i == 0){
            return false;
        }
    }
    return true;

}


int main() {
    fio

    ll m = 1;
    ll n ; cin >> n;
    while(is_prime(n*m+1)){
        m++;
    }
    cout << m;

    return 0;
}