//
// Created by Khaled Waleed on 5/20/2022
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m; cin >> n >> m;
    int arr[55];
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }

    sort(arr,arr + m);

    int min = arr[n-1] - arr[0];;

    for (int i = 0; i <= m - n; ++i) {
        if(arr[i+n-1] - arr[i] < min){
            min = arr[i+n-1] - arr[i];
        }
    }
    cout << min;
    return 0;
}