#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter Numbers:";
    cin >> i;

    if (i % 2 == 0)
    {
        cout << i << " is Even\n";
    }
    else
    {
        cout << i << "is odd\n";
    }

    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 100; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}
    */