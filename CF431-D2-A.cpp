//
// Created by walid on 5/10/2022.
//

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main() {
    using namespace std;
    fast;


    int arr[5];
    for (int i = 1; i <= 4; ++i) {
        cin >> arr[i];
    }


    string str; cin >> str;
    int calorie = 0;
    for(char i : str){
        if(i == '1'){
            calorie+=arr[1];
        }else if( i == '2'){
            calorie+=arr[2];
        }else if( i == '3'){
            calorie +=arr[3];
        }else{
            calorie+=arr[4];
        }
    }

    cout << calorie;
}