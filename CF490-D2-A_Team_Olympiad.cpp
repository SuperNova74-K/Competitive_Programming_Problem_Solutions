//
// Created by Khaled Waleed on 07-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int>ones;
    vector<int>twos;
    vector<int>threes;
    int temp;
    for (int i = 1; i < n+1; ++i) {
        cin >> temp;
        if (temp == 1) {
            ones.push_back(i);
        } else if (temp == 2) {
            twos.push_back(i);
        }else{
            threes.push_back(i);
        }
    }
    int lol = min((min(ones.size(), twos.size())),threes.size());
    if(lol == 0){
        cout << 0;
    }else{
        cout << lol << endl;
        for (int i = 0; i < lol; ++i) {
            cout << ones[i] << ' ' << twos[i] << ' ' << threes[i] << '\n';
        }
    }

    return 0;
}