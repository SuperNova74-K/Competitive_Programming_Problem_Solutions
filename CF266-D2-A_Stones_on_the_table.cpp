//
// Created by walid on 5/10/2022.
//


#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int main(){
    using namespace std;

    deque<char>q;

    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        char temp; cin >> temp;
        q.push_back(temp);
    }

    int answer = 0;
    for (int i = 0; i < q.size() - 1; ++i) {
        if(q[i] == q[i+1]){
            q.erase(q.begin()+i);
            answer++;
            i--;
        }
    }

    cout << answer;


}
