class Solution {
public:
    int characterReplacement(string s, int k) {
       unordered_map<char, int>mp;
       int i=0;
     int j =0;

int max_freq = 0;

for(j=0; j<s.length(); j++){
mp[s[j]]++;

max_freq= max(max_freq, mp[s[j]]);
int window_length = j-i+1;

if((window_length-max_freq)>k){

    mp[s[i]]--;
    i++;

}

     
      }
      return j-i;
       
    }
};