//
// Created by Khaled Waleed on 29-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long arr[100005]= {0} ;
    unordered_set<long long>primes = {2,3,5,7,11,13,17,19,23};
    for (int i = 0; i <= 1e5; ++i) {
        if(primes.count(__builtin_popcount(i)) == 1){
            arr[i] = 1;
        }
    }

    for (int i = 1; i <= 1e5; ++i) {
        arr[i] += arr[i-1];
    }


    int t,l,r; cin >> t;
    while(t--){
        cin >> l >> r;
        cout << arr[r] - arr[l-1] << '\n';
    }



    return 0;
}