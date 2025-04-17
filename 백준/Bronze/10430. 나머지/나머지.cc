#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    while (1)
    {
        cin >> A >> B >> C;

        if (A >= 2 && B >= 2 && C >= 2 && C <= 20000)
        {
            break;
        }
        else
        {
            cout << "retry\n";
        }
    }

    int a, b, c, d;
    a = (A + B) % C;
    b = ((A % C) + (B % C)) % C;
    c = (A * B) % C;
    d = ((A % C) * (B % C)) % C;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}
