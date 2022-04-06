// https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++)
        {

            if (tokens[i] == "+")
            {
                int a = (int)st.top();
                st.pop();
                int b = (int)st.top();
                st.pop();

                st.push(a + b);
            }
            else if (tokens[i] == "-")
            {
                int a = (int)st.top();
                st.pop();
                int b = (int)st.top();
                st.pop();

                st.push(a - b);
            }
            else if (tokens[i] == "/")
            {
                int a = (int)st.top();
                st.pop();
                int b = (int)st.top();
                st.pop();

                st.push(a / b);
            }
            else if (tokens[i] == "*")
            {
                int a = (int)st.top();
                st.pop();
                int b = (int)st.top();
                st.pop();

                st.push(a * b);
            }
            else
            {
                st.push[(int)tokens[i]];
            }
        }

        return st.top();
    }
};