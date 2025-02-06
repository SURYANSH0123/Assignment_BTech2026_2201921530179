class Solution {
public:
     int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
     int n = nums.size();
   int ans= nums[0]+nums[1]+nums[2]; 
     sort(nums.begin(), nums.end());
     for (int i =0; i<n-2 ; i++){
         if(i>0&& nums[i]==nums[i-1]) continue;
          int j =i+1;
          int k =n-1;
          while(j<k){
         int sum = nums[i]+nums[j]+nums[k];
         if (sum == target) return sum;
            if (abs(target-sum)< abs(target-ans)) {
                ans = sum;
            }
            else if (sum<target)
                    j++;
                 else    k--;
                
             }}
            return ans; 

    }
};