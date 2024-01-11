class Solution {
public:
    bool isPowerOfThree(long long int n) {
        if(n<=0) return false;
        double power=log10(n)/log10(3);
        if(power-(int)power==0) return true;
        return false;
    }
};
