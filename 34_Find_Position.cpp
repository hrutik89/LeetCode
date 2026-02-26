class Solution {
public:
int findFirst(vector<int>& nums, int target){
int left = 0;
        int right = nums.size()-1;
      int f=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
             f=mid;
                right=mid-1;
            }else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return f;
}
int findLast(vector<int>& nums, int target){
int left = 0;
        int right = nums.size()-1;
      int l=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                  l=mid;
                left=mid+1;
            }else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return l;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums,target),findLast(nums,target)};
    }
};