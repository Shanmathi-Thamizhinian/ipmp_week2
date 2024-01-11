class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        double power=log10(n)/log10(4);
        if(power-(int)power==0) return true;
        return false;   
    }
};
