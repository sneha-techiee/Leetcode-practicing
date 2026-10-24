class Solution {
public:
    string removeDuplicateLetters(string s) {
        string result;
       unordered_set<char>st;
       vector<int> freq(26, 0);
       for(char ch : s){
        
        freq[ch-'a']++;
       }
       
       for(char ch : s ){
       
        
         freq[ch-'a']--;
         if(st.find(ch)!= st.end()){
            continue;
         }
         while(!result.empty() && ch < result.back() && freq[result.back()-'a']>0){

            char last = result.back();
            st.erase(last);
            result.pop_back();


       } 
        st.insert(ch);
          result+=ch;

       }
       
       return result;
    }
};