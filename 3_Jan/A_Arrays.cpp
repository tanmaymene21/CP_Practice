#include <bits/stdc++.h>
using namespace std;

int main() {
    int nA, nB;
    cin>> nA >> nB;
    int k, m;
    cin>> k >> m;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < nA; i++) {
        int num;
        cin>> num;
        a.push_back(num);
    }
    for(int i = 0; i < nB; i++) {
        int num;
        cin>> num;
        b.push_back(num);
    }


    string ans = "YES";

    int i = 0, j = nB-m;
    while(i < k && j < nB) {
        if(a[i] >= b[j]) {
            ans = "NO";
            break;
        }
        i++;
    }

    cout<< ans << endl;
}
