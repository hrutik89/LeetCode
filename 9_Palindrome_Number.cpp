class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int digit=0;
        int num = x;
        while(num>0){
            digit=num%10;
            rev=int((rev*10)+digit);
            num=num/10;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};