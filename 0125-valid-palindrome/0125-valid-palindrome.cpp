//optimal approach = two pointers
class Solution {
public:
    bool isPalindrome(string s) {
    
    int i =0; 
    int j = s.length()-1;
    while(i<j){
       if(!isalnum(s[i])){
        i++;
       } 
       else if(!isalnum(s[j])){
        j--;
       }
       else if(tolower(s[i])!=tolower(s[j])){
return false;
       }else{

       
       i++;
       j--;
       }
    }
    

return true;
        }

};


//greedy approach
// mow the thing is time complexity is still O(n) but space for that result var and extra loop is making it less optimal otherwise in this also we are correctly using the concept of two pointers 
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string result; // modifying the string that it only contains lower and alphanumeric characters 
//         for(char ch : s){
//             if(isalnum(ch)){
//                 result+=tolower(ch);
//             }
//         }
//         int i =0;
//         int  j = result.length()-1;
     
//         for(i =0; i<=j; i++){
//             if(result[i]==result[j]){
//                 j--;
//             }
//             else{
//                 return false;
//             }
            
//         }
//         return true;

//     }
// };









