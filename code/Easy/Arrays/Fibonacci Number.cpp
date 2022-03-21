// https://leetcode.com/problems/fibonacci-number/
// 19/3/22

#include <iostream>

using namespace std;

int fib(int n)
{

    int previous = 0;
    int current = 1;

    if (n == 0)
    {
        return previous;
    }
    if (n == 1 || n == 2)
    {
        return current;
    }

    int ans;

    for (int i = 1; i < n; i++)
    {

        int temp = current;
        current = current + previous;
        previous = temp;
    }

    return current;
}

int main()
{

    return 0;
}
