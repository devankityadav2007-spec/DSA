class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        stack<int> st;
        unordered_map<int, int> mp;

        vector<int> ans(m);

        for(int i=n-1; i>=0; i--){

            while(!st.empty() && nums2[i]>=st.top()){
                st.pop();
            }

            // WE ONLY WANT MAX ELEMENT ON TOP OF THE STACK

            if(!st.empty()){
                mp[nums2[i]] = st.top();
            }
            else{
                mp[nums2[i]] = -1;
            }

            st.push(nums2[i]);
        }

        for(int i=0; i<m; i++){

            ans[i] = mp[nums1[i]];
        
        }

        return ans;


        
    }
};