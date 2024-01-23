#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin>> n;
        string s;
        cin>> s;

        for(int i = 0; i < s.size()-1; i++) {
            if(s[i] == s[i+1]) {
                continue;
            }
            else {
                s.erase(i, 2);
                i-=2;
            }
        }

        cout<< s.size() << endl;
    }
}