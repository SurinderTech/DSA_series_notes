#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter numbers:";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "it is Prime number";
    }
    else
    {
        cout << "NON Prime";
    }
    return 0;
}