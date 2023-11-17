class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int sum = nums[left] + nums[right];
            if(sum > ans) {
                ans = sum;
            }
            left++; right--;
        }
        return ans;
    }
};
