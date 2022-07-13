//
// Created by Khaled Waleed on 11-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    int cities[100005];

    for (int i = 0; i < n; ++i) {
        cin >> cities[i];
    }

    cout << cities[1]-cities[0] << ' ' << cities[n-1] - cities[0] << '\n';

    for (int i = 1; i < n - 1; ++i) {
        cout <<  min(cities[i]-cities[i-1], cities[i+1]-cities[i]);
        cout << ' '<< max(cities[n-1]-cities[i], cities[i]-cities[0]) << '\n';
    }

    cout << cities[n-1]-cities[n-2] << ' ' << cities[n-1] - cities[0] << '\n';

    return 0;
}