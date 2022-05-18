//
// Created by Khaled Waleed on 5/17/2022
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    
    string str; cin >> str;

    string vowel = "eaouiy";
    for (int i = 0; i < str.size(); ++i) {
        if(vowel.find((char) tolower(str[i])) != -1){
            str.erase(i,1);
            i--;
        }else{
            if(isupper(str[i])){
                str[i] = (char) tolower(str[i]);
            }

            str.insert(str.begin()+i,'.');
            i++;
        }
    }

    cout << str;
    return 0;
}