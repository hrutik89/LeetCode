class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=1;
        int right=nums.size()-1;
        int ans=-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            int count=0;
            for(int num:nums){
                if(num<=mid){
                    count++;
                }
            }
            if(count>mid){
                ans = mid;
                right=mid-1;
            }
            else{
                 left=mid+1;
            }
        }
        return ans;
    }
};