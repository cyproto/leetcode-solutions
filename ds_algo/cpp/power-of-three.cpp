class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        // if(n < 1) return false;
        // if(n == 1) return true;
        // return (n%3 == 0) && isPowerOfThree(n/3);
        return n > 0 && 1162261467 % n == 0;
    }
};