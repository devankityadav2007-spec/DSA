class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        int n = asteroids.size();

        stack<int> st;

        for(int i=0; i<n; i++){

            int a = asteroids[i];

            while(!st.empty() && st.top()>0 && a<0 && st.top()<abs(a)){
                st.pop();
            }

            if(!st.empty() && st.top()>0 && a<0){
                if(st.top() == abs(a)){
                    st.pop();    // And here we do not want to add it to stack
                }
            }
            else{
                st.push(a);
            }

        }

        // NOW OUR ANSWER IS STACK ELEMENTS
        vector<int> ans(st.size());

        for(int i=st.size()-1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }

        return ans;


        
    }
};