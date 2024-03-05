class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if((0 <= x)&& (x< 10)){
            return true;
        }
        size_t rev = 0;
        int og = x;
        int counter = 1;
        while(x!=0){
            int remainder = x%10;
            rev = (rev*10) + remainder;
            x = x / 10;
        }
        return(rev==og);
    }
};