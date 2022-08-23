//
// Created by Khaled Waleed on 29-Jul-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string first , second;
    while(cin >> first){
        cin >> second;

        array<long long, 600 >arr={0};

        std::reverse(first.begin(), first.end());
        std::reverse(second.begin(), second.end());

        for (int i = 0; i < second.size(); ++i) {
            for (int j = 0; j < first.size(); ++j) {
                arr[i+j] += (second[i] - '0' ) * (first[j] - '0');
            }
        }

        for (int i = 0; i < 599; ++i) {
            arr[i+1] += arr[i] / 10;
            arr[i]%=10;
        }
        int i;

        for (i = 505; i >= 0 ; --i) {
            if(arr[i] != 0){
                break;
            }
        }

        for (; i >= 0 ; --i) {
            cout << arr[i];
        }
        cout << endl;
    }


    return 0;
}