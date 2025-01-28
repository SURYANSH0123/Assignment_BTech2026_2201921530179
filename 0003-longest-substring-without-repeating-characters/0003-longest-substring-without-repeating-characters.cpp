class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l=0; 
        int r=0;
            int maxlen =0;
        // map<char , int> mpp;
        //    while(r<n){
        //     if( mpp.find(s[r]) != mpp.end() ){
        //         if(mpp[s[r]] + 1 > l ){
        //             l = mpp[s[r]]+1;
        //         }
        //     }
        //         mpp[s[r]] = r;
        //         maxlen = max(maxlen , r-l+1);
        //         r++;
        //     }




        
        //     return maxlen;

       
    //    --------------------------------------------------------------->>>>>>>>>
       unordered_set<char> st;
         while(r<n){
            if(st.find(s[r]) == st.end()){
                st.insert(s[r]);
            }
            else {
                while(st.find(s[r]) != st.end()){
                    st.erase(s[l]);
                    l++;
                }
            }
                st.insert(s[r]);
            maxlen = max( maxlen , r-l+1);
                r++;
         }
            return maxlen;
       
    }
};