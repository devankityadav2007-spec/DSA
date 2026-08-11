class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();

        stack<int> st;

        vector<int> ans(n, -1);

        for(int i=2*n-1; i>=0; i--){

            int num = nums[i%n];  // Do it for circular array
            while(!st.empty() && num>=st.top()){
                st.pop();
            }

            if(!st.empty() && i<n){
                ans[i] = st.top();   // Next greatest element
            }

            st.push(num);

        }

        return ans;
        
    }
};