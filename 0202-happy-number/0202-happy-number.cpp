class Solution {
public:
    bool isHappy(int n) {
        while(true){
        if( n ==1 ) return true;
        if( n ==4 ) return false;
        int rem =0;
        int sum =0;
        while(n ){
                rem = n%10;
                sum = sum + rem*rem;
                n=n/10;
        }
            n = sum;
        }
           
    }
};