https://leetcode.com/problems/majority-element/description/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int element = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                element = nums[i];
                cnt = 1;
            }
            else {
                if(nums[i] == element) {
                    cnt++;
                }
                else {
                    cnt--;
                }
            }
        }
        return element;
    }
};