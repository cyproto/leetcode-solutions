class MinStack
{
public:
    /** initialize your data structure here. */
    list<int> stack;
    int minval;

    MinStack()
    {
        minval = INT_MAX;
    }

    void push(int val)
    {
        stack.push_front(val);
        if (val < minval)
        {
            minval = val;
        }
    }

    void pop()
    {
        if (stack.front() == minval)
        {
            minval = INT_MAX;
            for (auto it = stack.begin(); it != stack.end(); it++)
            {
                if (*it < minval && it != stack.begin())
                {
                    minval = *it;
                }
            }
        }
        stack.pop_front();
    }

    int top()
    {
        return stack.front();
    }

    int getMin()
    {
        return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */