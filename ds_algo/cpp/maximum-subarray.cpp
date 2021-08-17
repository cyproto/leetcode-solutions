class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int s = 0, p = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            s = max(nums[i], s + nums[i]);
            p = max(s, p);
            cout << "s" << s << endl;
            cout << "p" << p << endl;
        }
        return p;
    }
};