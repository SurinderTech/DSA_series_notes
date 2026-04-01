// Print Even or odd
#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cout << "Enter numbers:";
    cin >> n;

    for (int i = 0; i <= n; i += 2)
    {
        cout << i << " Even\n";
    }
    return 0;
}