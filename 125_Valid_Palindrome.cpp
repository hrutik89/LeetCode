class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char c: s){
            if(c>='a'&&c<='z') str+=c;
            if(c>='A'&&c<='Z') str+=c+32;
            if(c>='0'&&c<='9') str+=c;
        }
        string st=str;
        int left=0;
        int right=str.size()-1;
        while(left<right){
            char temp = str[left];
            str[left]=str[right];
            str[right]=temp;
            left++;
            right--;
        }
        
        if(str==st){
            return true;
        }
        else{
        return false;
        }
    }
};