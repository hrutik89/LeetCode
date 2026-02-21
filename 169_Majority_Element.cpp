class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int num =0;
        for(int x:nums){
            if(count==0){
                num=x;
            }
            if(x==num){
                count++;
            }
            else{
                count--;
            }
        }
        return num;
    }
};