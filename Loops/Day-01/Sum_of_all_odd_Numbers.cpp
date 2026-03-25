#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 100; i += 2)
    {
        cout << i << " ";
        sum += i;
    }
    cout << "\nsum " << sum;
    return 0;
}