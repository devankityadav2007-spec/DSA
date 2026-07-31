class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        int left = 0;
        
        int maxLen = -1;
        
        unordered_map<int, int> mp;
        
        for(int r=0; r<n; r++){
            
            mp[s[r]]++;
            
            while(mp.size()>k){
                
                mp[s[left]]--;
                
                if(mp[s[left]] == 0){
                    mp.erase(s[left]);
                }
                
                left++;
            }
            
            if(mp.size() == k){
                maxLen = max(maxLen, r - left + 1);
            }
        }
        
        return maxLen;
        
    }
};