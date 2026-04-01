// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
int n = 10;
int number = 1;
for(int i = 1; i <=n; i++){
    
    for(int j = 1; j <= n; j++){
        cout << number << " ";
        number++;
    }
    cout << endl;
}
    return 0;
}