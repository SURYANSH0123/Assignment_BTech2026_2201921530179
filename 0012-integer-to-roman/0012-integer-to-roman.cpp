class Solution {
public:
    string intToRoman(int num) {
        // string romanSymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<string> romanSymbols {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        // int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<int> val = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        string result="";
        // jb convert krte h to sbse bda number choose krte hai
        for(int i=0;i<13;i++){
           if(num==0) break;
           int times= num/val[i];
           while(times--){
            result+= romanSymbols[i];
                   }
        
            num = num%val[i];
        }

        return result;

    
    }
};