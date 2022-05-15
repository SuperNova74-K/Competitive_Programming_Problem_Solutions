//
// Created by walid on 5/9/2022.
//

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
    fast;

    deque<int>lol;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp; cin >> temp;
        lol.push_back(temp);
    }

    int seraja=0;
    int dima = 0;

    while(not lol.empty()) {
        seraja += max(lol.front(), lol.back());
        (lol.front() > lol.back()) ? lol.pop_front() : lol.pop_back();
        if(lol.empty()){
            break;
        }
        dima+= max(lol.front(), lol.back());
        (lol.front() > lol.back()) ? lol.pop_front() : lol.pop_back();
    }

    cout << seraja << endl << dima;

}