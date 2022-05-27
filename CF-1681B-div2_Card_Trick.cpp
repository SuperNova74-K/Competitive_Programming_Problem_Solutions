//
// Created by Khaled Waleed on 5/27/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int arr[200005];
        for (int i = 0;i < n; ++i) {
            cin >> arr[i];
        }
        int m; cin >>  m;
        long long sum = 0;
        int temp;
        for (int i = 0; i < m; ++i) {
            cin >> temp;
            sum += temp;
        }

        cout << arr[sum%n] << '\n';
    }

    return 0;
}