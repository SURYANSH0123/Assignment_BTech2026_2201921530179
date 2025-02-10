class Solution {
public:
bool isalpha(char ch){
    return ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'));
}
    string clearDigits(string s) {
        string str="";
        for(auto it : s){
            if(  isalpha(it)){
                str.push_back(it);
            }
            else{
                str.pop_back();
            }
        }
        return str;
    }
};