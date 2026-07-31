class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int left = 0;
        unordered_map<int, int> mp;

        int maxLen = 0;

        for(int r=0; r<n; r++){

            if(mp.count(s[r])){
                left = max(left, mp[s[r]]+1);
            }
            mp[s[r]] = r;
            maxLen = max(maxLen, r - left +1);
        }

        return maxLen;
        
    }
};