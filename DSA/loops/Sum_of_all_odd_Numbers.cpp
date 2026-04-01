// sum of odd numbers with while loop
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 100)
    {
        cout << i << " ";
        sum += i;
        i += 2;
    }
    cout << "\nsum is " << sum;
    return 0;
}

/* {// with for loop sum of even numbers}

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
*/