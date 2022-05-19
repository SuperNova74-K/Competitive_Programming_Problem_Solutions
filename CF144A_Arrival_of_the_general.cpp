//
// Created by Khaled Waleed on 5/18/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[105];
    int n; cin >> n;
    int max = 0,min = 200, max_count = 1, min_count = 1;
    for (int i = 1; i <= n; ++i) {
        int temp; cin >> temp;

        if(temp >= max){
            if(temp > max) {
                max = temp;
                max_count = 1;
            }
            else if(max == temp){
                max_count++;
            }
        }
        if(temp <= min){
            if(temp < min) {
                min = temp;
                min_count = 1;
            }
            else if(min == temp){
                min_count++;
            }
        }
        arr[i] = temp;
    }
    int answer = 0;
    int index_smol;
    int index_lrg;

    if(not (max == min && max_count == n)) {
        for (int i = 1; i <= n; ++i) {
            if (arr[i] == max) {
                    answer += i - 1;
                    index_lrg = i;
                    max = 1000;
            }
            if (arr[i] == min) {
                if (min_count == 1) {
                    answer += n - i;
                    index_smol = i;
                } else {
                    min_count--;
                }
            }
        }
        if (index_lrg > index_smol) {
            answer--;
        }
    }
    cout << answer;

    return 0;
}