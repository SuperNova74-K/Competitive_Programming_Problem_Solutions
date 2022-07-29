//
// Created by Khaled Waleed on 27-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> numbers(n + 1);
        map<int, int> index;

        int end = n+1;

        for (int i = 1; i <= n; ++i) {
            cin >> numbers[i];
            index[numbers[i]] = i;
        }

        int max = n;
        int min_index = n;
        while(end != 1){
            for (int i = index[max]; i < end ; ++i) {
                if(i < min_index){
                    min_index = i;
                }
                cout << numbers[i] << ' ';
            }
            max--;
            end = min_index;
        }
        cout << '\n';

    }

    return 0;
}