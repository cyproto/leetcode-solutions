class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> bits(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            bits[i] = bits[i & (i - 1)] + 1;
        }

        return bits;
    }
};