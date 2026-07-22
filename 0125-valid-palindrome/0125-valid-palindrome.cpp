class Solution {
public:
    bool isPalindrome(string s) {
        string result; // modifying the string that it only contains lower and alphanumeric characters 
        for(char ch : s){
            if(isalnum(ch)){
                result+=tolower(ch);
            }
        }
        int i =0;
        int  j = result.length()-1;
     
        for(i =0; i<=j; i++){
            if(result[i]==result[j]){
                j--;
            }
            else{
                return false;
            }
            
        }
        return true;

    }
};