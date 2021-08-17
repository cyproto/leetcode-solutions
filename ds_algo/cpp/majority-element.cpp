class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int cur = nums[0];
        int count = 1;
        if (nums.size() > 1)
        {
            for (int i = 1; i <= nums.size() - 1; i++)
            {
                if (nums[i] == cur)
                {
                    count++;
                }
                else if (count == 0)
                {
                    cur = nums[i];
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return cur;
    }
};