class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int si = 0, ei = arr.size() - 1;
        int mid;
        while(si < ei) {
            int mid = si + (ei - si) / 2;

            if(arr[mid] < arr[mid + 1]) {
                si = mid + 1;
            }
            else if(arr[mid] > arr[mid + 1]) {
                ei = mid;
            }
        }
        return mid;
    }
};