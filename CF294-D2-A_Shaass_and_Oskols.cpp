//
// Created by walid on 5/12/2022.
//


#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() {
    using namespace std;

    fast;

    unordered_map<int,int>map;

    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        int temp; cin >> temp;
        map[i] = temp;
    }

    int m; cin >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y; cin >> x >> y;

        if(x == 1){
            map[2] += (map[1] - y);
        }else if(x == n){
            map[x-1] += y - 1;
        }else{
            map[x-1] += y - 1;
            map[x+1] += (map[x] - y);
        }
        map[x] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        cout << map[i] << endl;
    }

}