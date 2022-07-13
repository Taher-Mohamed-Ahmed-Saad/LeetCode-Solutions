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
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;
        while (n % 3 == 0)
        {
            n = n / 3;
        }
        return n == 1 ? true : false;
    }
};

/*
    without loops

class Solution 
{
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        int power = round(log(n)/log(3));
        return pow(3, power) == n;
    }
};


*/
