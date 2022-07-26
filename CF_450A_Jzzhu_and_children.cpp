//
// Created by Khaled Waleed on 26-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // This is my original solution (Accepted but sub-optimal) created by me Khaled Waleed but
    // below is better solution that I have learned from...
    // https://github.com/jackiehluo  , Special thanks for her

//
//    int n,m; cin >> n >> m;
//    deque<pair<int,int>>lol(n+1);
//    for (int i = 1; i <= n; ++i) {
//        cin >> lol[i].first;
//        lol[i].second = i;
//    }
//    while(lol.size() != 1){
//        if(lol[0].first <= m){
//            lol.pop_front();
//        }else{
//            lol.emplace_back(lol.front().first - m ,lol.front().second);
//            lol.pop_front();
//        }
//    }
//    cout << lol.front().second;


    int n,m,last; cin >> n >> m;
    double lol;
    int max = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> lol;
        if(ceil(lol/m) >= max){
            max = ceil(lol/m);
            last = i;
        }
    }

    cout << last;



    return 0;
}