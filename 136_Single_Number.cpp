class Solution {
public:
int num=0;
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i:nums){
            res^=i;
        }
        return res;
    }
};