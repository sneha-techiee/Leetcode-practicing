class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> mp;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i =0; i<s.length(); i++){
           mp[s[i]]++;
        }
        for(int i =0; i<t.length(); i++){
           mp[t[i]]--;
           if(mp[t[i]]<0){
            return false;
           }
        }
        return true;

       }
    



      
    
};


// brute force
/*For counting character frequencies, we can treat each unique character in a string as a key and its number of occurrences as the value. As we iterate through the string, we check if the character already exists in the map. If it does, we increment the value by one. If not, we add it with an initial count of one. This method provides an efficient way to record the occurrence of all characters in the string.
*/