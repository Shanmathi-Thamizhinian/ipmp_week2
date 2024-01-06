
class Solution{
	public:
	int power(int x, int n) {
        long long res = 1;
        while(n) {
            if(n & 1) {
                res = ( (res % 9) * (x % 9) ) % 9;
            }
            x = ( (x % 9) * (x % 9) ) % 9;
            n = n >> 1;
        }
        if(res == 0)
            return 9;
        return res;
	}
	int SumofDigits(int A, int B)
	{
	    int n = power(A, B);
	    return n;
	}
};
