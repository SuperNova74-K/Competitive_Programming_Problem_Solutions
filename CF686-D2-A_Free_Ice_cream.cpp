//
// Created by Khaled Waleed on 11-Jun-22
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n,packs; cin >> n >> packs;
    char temp;
    int temp_num;
    long long distress = 0;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        cin >> temp_num;
        if(temp == '+'){
            packs += temp_num;
        }else{
            if(temp_num > packs){
                distress++;
            }else{
                packs-=temp_num;
            }
        }
    }

    cout << packs << '\n' << distress;


    return 0;
}