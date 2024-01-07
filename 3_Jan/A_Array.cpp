https://codeforces.com/contest/300/problem/A
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> neg, pos, zero;
 
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp < 0) neg.push_back(tmp); 
        if (tmp >  0) pos.push_back(tmp);
        if (tmp == 0) zero.push_back(tmp);
    }
 
    if (pos.empty()) {
        for (int i = 0; i < 2; i++) {
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }
 
    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }
 
    cout << neg.size();
    for (int val : neg) {
        cout << " " << val;
    }
    cout << "\n";
 
    cout << pos.size();
    for (int val : pos) {
        cout << " " << val;
    }
    cout << "\n";
 
    cout << zero.size();
    for (int val : zero) {
        cout << " " << val;
    }
    return 0;
}