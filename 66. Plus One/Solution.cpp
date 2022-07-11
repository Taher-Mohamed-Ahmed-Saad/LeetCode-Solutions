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
    vector<int> plusOne(vector<int> &digits)
    {
        bool all_nines = true;
        int sz = digits.size();
        for (int i = sz - 1; i >= 0; i--)
        {
            digits[i] = (digits[i] + 1);
            if (digits[i] != 10)
            {
                all_nines = false;
                break;
            }
            digits[i] = 0;
        }
        if (all_nines)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};