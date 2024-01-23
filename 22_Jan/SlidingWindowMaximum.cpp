class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        vector<int> ans;
        map<int, int> mp;
        while(j < n) {
            if(j-i < k) {
                mp[nums[j]]++;
                j++;
            }
            else {
                int maxi = mp.rbegin()->first;
                ans.push_back(maxi);
                mp[nums[i]]--;
                if(!mp[nums[i]]) mp.erase(nums[i]);
                mp[nums[j]]++;
                i++;
                j++;
            }
        }
        ans.push_back(mp.rbegin()->first);
        return ans;

        // mp => -1 -> 1   maxi = -1
    }
};