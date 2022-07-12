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
    bool isIsomorphic(string s, string t)
    {
        struct Node
        {
            char value = ' ';
        };
        unordered_map<char, Node> mp;
        unordered_map<char, Node> reverse_mp;

        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            if (mp[s[i]].value == ' ')
            {
                if (!(reverse_mp[t[i]].value == s[i] || reverse_mp[t[i]].value == ' '))
                    return false;
                mp[s[i]].value = t[i];
                reverse_mp[t[i]].value = s[i];
            }
            else
            {
                if (mp[s[i]].value != t[i])
                    return false;
            }
        }
        return true;
    }
};