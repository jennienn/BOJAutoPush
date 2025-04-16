#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

    // 조건: 1000 ≤ y ≤ 3000
    if (y >= 1000 && y <= 3000)
    {
        cout << y - 543 << endl;
    }
    else
    {
        cout << "retry" << endl;
    }

    return 0;
}
