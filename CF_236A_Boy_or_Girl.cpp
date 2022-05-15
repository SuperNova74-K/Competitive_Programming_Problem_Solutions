#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) ;

using namespace std;

int main() {
    fast;

    unordered_set<char>set;
    string a; cin >> a;
    for(char i : a){
        set.insert(i);
    }

    (set.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";


}