class Solution {
public:
bool isVowel(char &ch){
    
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' );
 
}
    string sortVowels(string s) {
    //     string temp ; 
    //     for(char &it : s){
    //         if(isVowel(it)){
    //             temp.push_back(it);
    //         }
    //     }
    //     sort(temp.begin(),temp.end());
    //     int j =0;
    //     for(int i =0 ; i<s.size(); i++){
    //         if(isVowel(s[i])){
    //             s[i] = temp[j];
    //             j++;
    //         }
    //     }
    //     return s;

    // --------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    map<char , int> mpp;
    for(char &ch : s){
        mpp[ch]++;
    }
    string temp = "AEIOUaeiou";
    int j =0;
    for(int i=0 ; i<s.size() ; i++){
        if(isVowel(s[i])){
            while(mpp[temp[j]]==0){
                j++;
            }
            s[i]=temp[j];
            mpp[temp[j]]--;
        }
    }
    return s;

    }
};