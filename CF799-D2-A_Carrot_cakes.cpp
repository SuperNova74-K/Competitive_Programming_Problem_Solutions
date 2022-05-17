//
// Created by walid on 5/16/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n,t,k,d; cin >> n >> t >> k >> d;

    int time = (n/k + (n%k > 0)) * t;
    cout << ((time > t+d) ? "YES" : "NO");

}