#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i;
    cout << "Enter number :"; //<< endl;
    cin >> i;
     cout << "Your number is : " << i << endl;
     cout << "Power of " << i << "is" << " pow(i, 2) << endl;
     cout << fmax(i, 5) << endl;
     cout << fmin(i, 5) << endl;

    return 0;
}