#include <iostream>
using namespace std;

int main()
{

    string expr;
    cout << "Enter Numbers:";
    cin >> expr;
    // storing values
    int sum = 0, num = 0;
    // checking numbers or operator through loop
    for (int i = 0; i < expr.length(); i++)
    {
        if (isdigit(expr[i]))
        {
            num = num * 10 + (expr[i] - '0');
        }

        else if (expr[i] == '+')
            ;
        {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    cout << "Result:" << sum;
    return 0;
}