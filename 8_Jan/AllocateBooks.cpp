int func(vector<int> arr, int pages) {
    int stdCnt = 1, pagesCnt = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(pagesCnt + arr[i] > pages) {
            stdCnt++;
            pagesCnt = arr[i];
        }
        else {
            pagesCnt += arr[i];
        }
    }
    return stdCnt;
}

int findPages(vector<int>& arr, int n, int m) {

    if(m > n) return -1;
    // Write your code here.
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int mid, ans = -1;

    while(low <= high) {
        mid = low + (high-low)/2;
        int students = func(arr, mid);
        if(students <= m) {
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}