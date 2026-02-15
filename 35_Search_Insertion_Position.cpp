class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int n=nums.size();
       for(int i=0;i<n-1; i++){
            while(nums[i]<=target){
                ans=i;
            }
        if(nums[n-1]<target){
            return nums.size();
        }
       } 
       return ans;
    }
};