class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          vector<int> ans ;
          for(int i = 0; i < nums1.size(); i++){
              ans.push_back(nums1[i]);
          } 
            for(int j = 0 ; j < nums2.size(); j++){
              ans.push_back(nums2[j]);
          } 
          sort(ans.begin(),ans.end());

         int n= ans.size();
        int s= 0 ,e=n-1;
           int   mid= (s+e)/2.0;
          double median;
        if ((n%2)==0 )
        median =  (ans[mid]+ans[mid+1])/2.0;
             
                 else 
                     median =(ans[mid]);
                     return median;
                     }
};