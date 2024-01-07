https://codeforces.com/contest/1857/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--) {
        int n, cnt = 0;
        cin>> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>> arr[i];

        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 != 0) cnt++;
        }

        if(cnt % 2 == 0) cout<< "YES" <<  endl;
        else cout<< "NO" << endl;
    }
}