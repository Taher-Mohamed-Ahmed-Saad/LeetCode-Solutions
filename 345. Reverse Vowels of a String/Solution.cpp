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
    string reverseVowels(string s)
    {
        int sz = s.size();
        stack<char> c;
        vector<int> v;
        for (int i = 0; i < sz; i++)
        {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
            {
                c.push(s[i]);
                v.push_back(i);
            }
        }
        int sz2 = v.size();
        for (int i = 0; i < sz2; i++)
        {
            s[v[i]] = c.top();
            c.pop();
        }
        return s;
    }
};