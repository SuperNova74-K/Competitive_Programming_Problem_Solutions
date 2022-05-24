//
// Created by Khaled Waleed on 5/19/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool last_player = false;
    int n,m; cin >> n >> m;

    while(m * n){
        m--;
        n--;
        last_player = not last_player;
    }

    cout << (last_player ? "Akshat" :"Malvika");

    return 0;
}