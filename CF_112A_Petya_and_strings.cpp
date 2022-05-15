#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) ;

using namespace std;

int main(){
    fast;

    string a,b; cin >> a >> b;
    for(char &i : a){
        i = toupper(i);
    }
    for(char &i : b){
        i = toupper(i);
    }
    int state = 0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i] > b[i]){
            state = 1;
            break;
        }else if(a[i] < b[i]){
            state = -1;
            break;
        }
    }

    cout << state;
    
}