class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        //sort array in ascending order
        sort(nums.begin(), nums.end());
        //Variable for size of array
        int size  = nums.size();
        int right = size - 1;
        int TotalOperations = 0;

        //Condition to perform n operations
        while(right > 0) {
            if (nums[right - 1] != nums[right]) {
                TotalOperations += size - right;
            }
            --right;
        }
        return TotalOperations;
    }
};
