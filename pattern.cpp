#include <iostream>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n1)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j <= i; j++)
        { 
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int a, a1;
    cin >> a >> a1;
    print1(a);
    print2(a1);
}
