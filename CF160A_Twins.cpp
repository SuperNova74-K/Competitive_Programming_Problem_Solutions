//
// Created by Khaled Waleed on 5/18/2022
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n;cin >> n;
    vector<int>vec;
    long long sum = 0;
    for (int i = 0; i < n; ++i){
        int temp; cin >> temp;
        vec.push_back(temp);
        sum += temp;
    }
    long long taken = 0;
    sort(vec.begin(), vec.end(), greater<>());
    int counter = 0;

    while(taken <= (sum*1.0)/2 && counter+1 <=n){
        taken += vec[counter];
        counter++;
    }
    cout << counter;

    return 0;
}