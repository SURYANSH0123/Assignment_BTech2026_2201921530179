class Solution {
public:
    string reverseVowels(string s) {
       string str="";
        int n = s.size();
        int i =0;
        int j = n;
       while(i<j){
        i = s.find_first_of("aeiouAEIOU",i);
        j = s.find_last_of("aeiouAEIOU",j);
       
       if(i<j) {
        swap(s[i],s[j]);
       i++;j--;
       }
       }
       return s;

   }
};