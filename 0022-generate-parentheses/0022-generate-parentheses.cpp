class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
       function(0,0,n , "" ,ans);

       return ans;
    }
    public: 

        void function(int open , int close , int n , string s , vector<string >&ans ){
            if(open > n ) return ;
            if(close>open ) return ;
            if( open + close == 2*n && open == close) {
                ans.push_back(s);
                return ;
            }
            function(open +1 , close, n , s+'(' , ans);
            if( open > close){
                function( open , close+1 , n , s+')' , ans);
            }





        }

};