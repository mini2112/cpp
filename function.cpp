#include <iostream>
using namespace std;

// Take two numbers and print its sum

// int SUm(int a, int b)
// {
//     //    int  SUM=a+b;
//     // directly return the sum
//     return a + b;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int res = SUm(a, b);
//     cout << "the sum of these number is " << res << endl;
//     return 0;
// }

// Take input and  return the max of two input numbers

int Max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    int m = Max(x, y);
    cout << "The maximum from both the number is" << m << endl;

    return 0;
}
