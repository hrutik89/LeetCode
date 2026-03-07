class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string a: operations){
            if(a=="++X"){
                ++x;
            }
            else if(a=="X++"){
                x++;
            }
            else if(a=="--X"){
                --x;
            }
            else if(a=="X--"){
                x--;
            }
        }
        return x;
    }
};