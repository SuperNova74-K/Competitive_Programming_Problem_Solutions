//
// Created by Khaled Waleed on 5/24/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string lol; cin >> lol;
    int consecutive = 0;
    char ch = lol[0];
    for (int i = 1; i < lol.size(); ++i) {
        if(lol[i] == ch){
            consecutive++;
        }else{
            consecutive = 0;
        }
        ch = lol[i];
        if( consecutive == 6){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}