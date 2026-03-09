class Solution {
public:
    int guessNumber(int n) {
        while(guess(n)!=0){
            if(guess(n)==-1){
                n--;
            }
            else if(guess(n)==1){
                n++;
            }
        }
        return n;
    }
};