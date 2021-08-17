class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int s = 0, p = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            s = max(0, s += prices[i] - prices[i - 1]);
            p = max(p, s);
        }

        return p;
    }
};