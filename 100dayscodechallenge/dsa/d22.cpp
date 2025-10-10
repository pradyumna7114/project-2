#include <iostream>
using namespace std;
int gcd(int c, int d)
{
    if (c < d)
    {
        c = c - d;
    }
    else
    {
        d = d - c;
    }
    return c;
}

int main()
{
    int a = 5, b = 25;
    int result = gcd(a, b);
    cout << " " << result ;
    return 0;
}