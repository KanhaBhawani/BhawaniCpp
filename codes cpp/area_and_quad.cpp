//developed by kanha bhawani
//abhi kaam bohat baaki hai..
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "lets find the type of quad."<<endl
         << "all the dimentions must be mathmetically correct";
    float a, b, c, d, e, f;
    cout << "give measures of 4 sides respectively.";
    cin >> a >> b >> c >> d;

      cout << "give digonals." << endl;
        cin >> e >> f;

    if (a == c && b == d)
    {
      
        if (e == f)
        {
            if (a != b)
            {
                cout << "reactangle" << endl;
            }
            else
            {
                cout << "square" << endl;
            }
        }
        else if (a == b)
        {
            cout << "rhombus" << endl;
        }

        else
        {
            cout << "parallelogram." << endl;
        }
    }
    else if (a == b && c == d)
    {
        cout << "kite" << endl;
    }
    else
    {
        cout << "general quad." << endl;
    }
    float i = a + b + e;
    float j = c + d + e;

    float s1 = i / 2;
    float s2 = j / 2;

    float m1 = s1 - a, m2 = s1 - b, m3 = s1 - e;
    float n1 = s2 - c, n2 = s2 - d, n3 = s2 - e;

    float area1 = sqrt(s1 * m1 * m2 * m3);
    float area2 = sqrt(s2 * n1 * n2 * n3);

    cout << "area is " << area1 + area2 << endl;

    return 0;
}