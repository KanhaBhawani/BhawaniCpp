// roots of quad. developed by Kanha bhawani
//bohat kuch kar sakte hein
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "formate of euqation:ax^2+bx+c" << endl
         << "lets compare a,b,c" << endl;
    float a, b, c;
    cin >> a >> b >> c;
    float D = b * b - 4 * a * c;
    float l = sqrt(D);
    // cout << l << endl;
    if (D >= 0)
    {
        cout << "roots are real and ";
        if (D == 0)
        {
            cout << "equal" << endl;
        }
        else
        {
            cout << "alag alag" << endl;
        }
        float i1 = 0 - b + l;
        float i2 = 0 - b - l;
        float x1 = i1 / 2 * a;
        float x2 = i2 / 2 * a;

        cout << "roots are:" << x1 << " and " << x2 << endl;
    }
    else
    {
        cout << "roots are imaginary..." << endl
             << "no real value!!";
    }

    return 0;
}