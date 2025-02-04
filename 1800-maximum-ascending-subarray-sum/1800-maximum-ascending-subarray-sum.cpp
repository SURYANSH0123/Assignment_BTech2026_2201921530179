class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    //     int res = 0, sum = nums[0];
    // for (int i = 1; i < nums.size(); ++i) {
    //     if (nums[i] <= nums[i - 1]) {
    //         res = max(res, sum);
    //         sum =0;
    //     }
       
    //       sum += nums[i];
        
    // }
    // return max(res, sum);

    // ----------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    int maxSum = 0, currentSum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];  
            } else {
                maxSum = max(maxSum, currentSum);
                currentSum = nums[i];  
            }
        }
        
        return max(maxSum, currentSum);
    }
};