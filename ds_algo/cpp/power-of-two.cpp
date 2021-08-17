class Solution
{
public:
    bool isPowerOfTwo(long n)
    {
        return n && (!(n & (n - 1)));
    }
};