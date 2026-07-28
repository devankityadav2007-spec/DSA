class Solution {
public:

    int BS(vector<int>& nums, int target, int s, int e){

        // Base condition
        if(s>e) return -1;

        int mid = (s + e)/2;

        if(target == nums[mid]) return mid;

        else if(target < nums[mid]){
            return BS(nums, target, s, mid-1);   // Always return the function call....
        }

        else{
            return BS(nums, target, mid+1, e);
        }

    }

    int search(vector<int>& nums, int target) {

        // Using Recursion

        int start = 0;
        int end = nums.size() - 1;


        return BS(nums, target, start, end);
        
    }
};