#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(4) << "x" << "    |"
        << setw(6) << "y" << "     |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    A = pow(x, 2) * sin(4 * x / 3);
    while (x <= xk)
    {
        if (x < -5) {
            B = 1 / tan(x);
        }
        else if (x >= -5 && x < 0) {
            B = 4 - (pow(x, 2) / 2);
        }
        else {
            B = log10(x * x) - (4 * x / 3);
        }
        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "----------------------" << endl;
    system("pause");
    return 0;
}