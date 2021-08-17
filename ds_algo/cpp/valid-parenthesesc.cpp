class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> stk;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '{':
                stk.push('}');
                break;
            case '(':
                stk.push(')');
                break;
            case '[':
                stk.push(']');
                break;
            default:
                if (stk.size() == 0 || s[i] != stk.top())
                {
                    return false;
                }
                else
                {
                    stk.pop();
                }
            }
        }
        return stk.size() == 0;
    }
};