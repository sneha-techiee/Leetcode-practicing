class Solution {
public:
    int lengthOfLongestSubstring(string s) {
unordered_map<char, int>mp;
int i =0;
int j=0;
int maxlen=0;
for(j=0; j<s.length(); j++){
  

    if(mp.find(s[j])!=mp.end()){
        i = max(i, mp[s[j]]+1);
    }
    mp[s[j]]=j;
      int currentlen = j-i+1; // will use this formula in sliding window ,substrings etc problems
maxlen = max(maxlen, currentlen);
}

    
return maxlen;
    }
};
