class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        int temp=x;
        while(temp!=0){
            int digit = temp%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev=rev*10+digit;
            temp=temp/10;
        }
        return rev;
    }
};