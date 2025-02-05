class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        string s11 = s1;
        string s22 = s2;
        sort(s11.begin(),s11.end());
        sort(s22.begin(),s22.end());
        if(s11!=s22) return false;

        int cnt =0 ; 
        for(int i =0 ; i<s1.size();i++){
            if(s1[i]!=s2[i]){
                cnt++;
            }
        }
        if(cnt==0 || cnt ==2) return true;
        return false ;
    }
};