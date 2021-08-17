class Solution
{
public:
    vector<int> diffWaysToCompute(string expression)
    {
        vector<int> result;
        int size = expression.size();
        for (int i = 0; i < size; i++)
        {
            char current = expression[i];
            if (current == '+' || current == '-' || current == '*')
            {
                vector<int> res1 = diffWaysToCompute(expression.substr(0, i));
                vector<int> res2 = diffWaysToCompute(expression.substr(i + 1));
                for (auto n1 : res1)
                {
                    for (auto n2 : res2)
                    {
                        if (current == '*')
                        {
                            result.push_back(n1 * n2);
                        }
                        else if (current == '+')
                        {
                            result.push_back(n1 + n2);
                        }
                        else
                        {
                            result.push_back(n1 - n2);
                        }
                    }
                }
            }
        }
        if (result.empty())
        {
            result.push_back(atoi(expression.c_str()));
        }
        return result;
    }
};