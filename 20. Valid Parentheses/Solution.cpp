#include <iostream>
#include <string.h>
#include <cstring>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <map>
#include <algorithm>
#include <set>
#include <queue>
#include <sstream>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int sz = s.size();

        if (sz % 2 == 1)
            return false;

        stack<char> st;

        for (int i = 0; i < sz; i++)
        {
            if (s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            else if (s[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
            else if (s[i] == '}')
            {
                if (!st.empty() && st.top() == '{')
                    st.pop();
                else
                    return false;
            }
            else
                st.push(s[i]);
        }
        return st.size() == 0 ? true : false;
    }
};