https://www.codechef.com/problems/SUBARRY
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--) {
	    int n;
	    cin>> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin>> arr[i];
	    
	    sort(arr, arr+n);
	    long long minIntVal = arr[0], maxIntVal = arr[n-1];
	    long long maxAns = max(minIntVal * minIntVal, maxIntVal * maxIntVal);
	    long long minAns = min(minIntVal * minIntVal, min(maxIntVal * maxIntVal, maxIntVal * minIntVal));
	    
	    cout<< minAns << " " << maxAns << endl;
	}

}
