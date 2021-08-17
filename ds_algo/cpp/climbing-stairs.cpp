class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 1)
        {
            return 1;
        }

        // int ones = climbStairs(n-1);
        // int twos = climbStairs(n-2);
        // return ones + twos;
        vector<int> steps(n, 0);
        steps[0] = 1;
        steps[1] = 2;

        for (int i = 2; i < n; i++)
        {
            steps[i] = steps[i - 2] + steps[i - 1];
        }

        return steps[n - 1];
    }
};