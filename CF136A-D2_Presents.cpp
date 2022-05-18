//
// Created by Khaled Waleed on 5/18/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[101];
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        int temp;cin >> temp;
        arr[temp] = i;
    }

    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}