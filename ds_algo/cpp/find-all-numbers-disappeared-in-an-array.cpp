class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int temp = 0;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            temp = nums[i];
            temp = temp > 0 ? temp : -temp;
            if (nums[temp - 1] > 0)
                nums[temp - 1] *= -1;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};