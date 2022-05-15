//
// Created by walid on 5/11/2022.
//


#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) , cin.tie(0), cout(0);

int main() {
    using namespace std;

    vector<int>v1;
    vector<int>v2;

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        v1.push_back(temp);
        cin >> temp;
        v2.push_back(temp);
    }
    int answer = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i!=j && v1[i] == v2[j]) {
                answer++;
            }
        }
    }
    cout << answer;

}