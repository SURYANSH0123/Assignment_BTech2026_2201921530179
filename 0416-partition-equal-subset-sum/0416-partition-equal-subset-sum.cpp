class Solution{   
bool func(int ind , int tar , vector<int>& arr , vector<vector<int>>& dp ){
  if(dp[ind][tar] != -1) return dp[ind][tar];
   if( tar == 0) return true;
    if(ind ==0) return arr[0] == tar;
    bool nottake = func(ind-1 , tar  , arr , dp);
        bool take = false;
if(tar >= arr[ind])    take = func(ind-1 , tar - arr[ind] , arr , dp);
return dp[ind][tar] = take | nottake ;

}



public:
    bool canPartition(vector<int>arr){
        int n = arr.size();
        int totSum = 0;

        for (int i = 0; i < n; i++) {
            totSum += arr[i];
        }
        if (totSum % 2 == 1)
            return false;
            
        else{
            int k = totSum / 2;
            
         vector<vector<int>> dp(n , vector<int>(k+1 , -1));
            return func(n - 1, k, arr, dp);
        }
    }
};
        