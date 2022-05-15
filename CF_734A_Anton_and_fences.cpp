#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b=0,c=0;cin >> a;
    string s; cin >> s;
    for(auto i : s){
        if(i == 'A'){
            b++;
        }else{
            c++;
        }
    }
    if(c < b){
        cout << "Anton";
    }else if (c==b){
        cout << "Friendship";
    }else{
        cout << "Danik";
    }
}