class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ;
        vector<int> arr;
        function(0 , candidates , ans , arr,  target );
        return ans ;
    }
public:
    void function(int index ,vector<int>& candidates,vector<vector<int>> &ans,vector<int>& arr, int sum )
    {
        if ( sum ==0){
            ans.push_back(arr);
            return ;
        }
        if( sum < 0 || index == candidates.size()){
            return ;
        }
        arr.push_back(candidates[index]);
        function(index ,candidates, ans, arr, sum - candidates[index] );
        arr.pop_back();
        function(index+1 ,candidates, ans, arr, sum  );


    }
};