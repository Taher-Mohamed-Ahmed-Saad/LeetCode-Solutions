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
    bool checkRecord(string s)
    {
        int counta = 0, countl = 0;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {

            if (s[i] == 'L')
            {
                countl++;
            }
            else
            {
                countl = 0;
                if (s[i] == 'A')
                    counta++;
            }

            if (counta > 1 || countl > 2)
                return false;
        }
        return true;
    }
};