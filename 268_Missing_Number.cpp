class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int calc = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            calc += i + 1;
        }
        return calc - sum;
    }
};