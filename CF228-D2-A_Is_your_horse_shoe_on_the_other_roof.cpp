//
// Created by walid on 5/12/2022.
//

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;


int main() {
    fast;

    int temp;
    unordered_set<int>set;
    for (int i = 0; i < 4; ++i) {
        cin >> temp;
        set.insert(temp);
    }

    cout << 4-set.size();

}