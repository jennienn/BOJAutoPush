#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    int b_one, b_ten, b_hun;

    int Ab_one, Ab_ten, Ab_hun;

    b_one = B % 10;
    b_ten = B / 10 % 10;
    b_hun = B / 10 / 10 % 10;

    Ab_one = A * b_one;
    Ab_ten = A * b_ten;
    Ab_hun = A * b_hun;

    cout << Ab_one << endl;
    cout << Ab_ten << endl;
    cout << Ab_hun << endl;
    cout << A * B << endl;

    return 0;
}
