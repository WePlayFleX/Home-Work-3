#include <iostream>

using namespace std;

int main()
{
    int A;
    double Money, B;
    cout << "Enter the number" << endl;
    cin >> Money;
    A = Money;
    B = (Money - A) * 100;
    cout << A << " rubley  " << B << "  kopeek" << endl;

    system("pause");
    return 0;
}