class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>>mp;
    
vector<vector<string>> ans;
      string word;//yes
       string sortedword;
     for(int i =0; i<strs.size();  i++){
        word = strs[i];
        sortedword= word;
       sort(sortedword.begin(), sortedword.end());

    
mp[sortedword].push_back(word);
    
     }


for(auto it : mp) {
    ans.push_back(it.second);
}

return ans;
     }        
    
};
// this is of the type hashmap and canonical representation, which means that we will give one standard form to equivalent things, which are anagrams here 

// so if we talk about sorting , so from the whole vector, we will separate it into words and then sort every word then compare 