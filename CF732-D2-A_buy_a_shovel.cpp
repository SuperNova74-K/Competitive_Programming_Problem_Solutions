//
// Created by walid on 5/12/2022.
//

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;


int main(){
    fast;

    int price, ahad;
    cin >> price >> ahad;

    long long counter = 1;
    int mrd = price % 10;


    while((mrd * counter) % 10 != ahad && (mrd * counter) % 10 != 0){
        counter++;
    }

    cout << counter;
}