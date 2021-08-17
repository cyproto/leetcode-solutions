class Solution
{
public:
    int reverse(int x)
    {
        bool isNegative = x < 0 ? true : false;
        x = abs(x);
        int res = 0;
        while (x > 0)
        {
            if (res > INT_MAX / 10)
                return 0;
            int temp = (res * 10) + (x % 10);
            if (temp / 10 != res)
                return 0;
            res = temp;
            x /= 10;
        }
        if (res < INT_MIN / 10)
            return 0;
        return isNegative ? -res : res;
    }
};