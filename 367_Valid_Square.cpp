class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        for(i=1;i<=num/i;i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
    }
};