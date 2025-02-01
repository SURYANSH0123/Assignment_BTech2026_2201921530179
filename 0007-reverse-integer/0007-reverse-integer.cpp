class Solution {
public:
    int reverse(int x) {
        long long  sum =0,ans=0;
        while(x!=0){
           ans = x%10;
           sum = (sum*10)+ans;
           x=x/10;

        }
        if(sum>INT_MAX || sum < INT_MIN) return 0;
        return sum;
       
        
    
    }
};