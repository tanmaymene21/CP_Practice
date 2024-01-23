class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9+7;

        stack<pair<int, int>> stLeft, stRight;
        vector<int> left(n, 0), right(n, 0);

        for(int i = 0; i < n; i++) {
            int cnt = 1;
            if(!stLeft.empty() && stLeft.top().first > arr[i]) {
                cnt += stLeft.top().second;
                stLeft.pop();
            }
            stLeft.push({arr[i], cnt});
            left[i] = cnt;
        }

        for(int i = n-1; i >= 0; i--) {
            int cnt = 1;
            if(!stRight.empty() && stRight.top().first >= arr[i]) {
                cnt += stRight.top().second;
                stRight.pop();
            }
            stRight.push({arr[i], cnt});
            right[i] = cnt;
        }

        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum = (sum + (arr[i] * (long long)(left[i] * right[i])%mod)%mod)%mod;
        }
        
        return sum % mod;
    }
};