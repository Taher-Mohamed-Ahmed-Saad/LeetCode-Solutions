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
    bool isSubsequence(string s, string t)
    {
        int sz1 = s.size();
        int sz2 = t.size();
        if (sz1 > sz2)
            return false;
        int i = 0, j = 0;
        while (i < sz1 && j < sz2)
        {
            if (s[i] == t[j])
                i++;
            j++;
        }
        if (i == sz1)
            return true;
        return false;
    }
};
