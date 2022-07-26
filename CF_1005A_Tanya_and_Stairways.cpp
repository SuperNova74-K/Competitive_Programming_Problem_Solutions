//
// Created by Khaled Waleed on 26-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);



    int n; cin >> n;
    vector<int>lol(n);
    int temp, min = 999999999, answer = 0;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if(temp <= min){
            lol[answer]++;
            answer++;
            min = temp;
        }else{
            lol[answer-1]++;
        }

    }
    cout << answer << '\n' ;
    for (int i = 0; i < answer; ++i) {
        cout << lol[i] << ' ';
    }
    return 0;
}