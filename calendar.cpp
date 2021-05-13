//Calendar developed by Kanha Bhawani
#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cout << "hello!" << endl
         << "This is the calender" << endl
         << "Enter date in the formate of DD/MM/YYYY" << endl;
    cout << "enter DD:";
    cin >> d;
    cout << "enter MM:";
    cin >> m;
    cout << "enter YY:";
    cin >> y;
    cout << "given date is:" << d << "/" << m << "/" << y << endl;

    //for date: d

    if (m <= 12 && m >= 1)
    {
        //For month: m1
        int m1;
        // if (m == 1)
        // {
        //     m1 = 0;
        // }
        // else if (m == 2)
        // {
        //     m1 = 3;
        // }
        // else if (m == 3)
        // {
        //     m1 = 3;
        // }
        // else if (m == 4)
        // {
        //     m1 = 6;
        // }
        // else if (m == 5)
        // {
        //     m1 = 1;
        // }
        // else if (m == 6)
        // {
        //     m1 = 4;
        // }
        // else if (m == 7)
        // {
        //     m1 = 6;
        // }
        // else if (m == 8)
        // {
        //     m1 = 2;
        // }
        // else if (m == 9)
        // {
        //     m1 = 5;
        // }
        // else if (m == 10)
        // {
        //     m1 = 0;
        // }
        // else if (m == 11)
        // {
        //     m1 = 3;
        // }
        // else
        // {
        //     m1 = 5;
        // }
        switch (m)
        {
        case 1:
            m1 = 0;
            break;
        case 2:
            m1 = 3;
            break;
        case 3:
            m1 = 3;
            break;
        case 4:
            m1 = 6;
            break;
        case 5:
            m1 = 1;
            break;
        case 6:
            m1 = 4;
            break;
        case 7:
            m1 = 6;
            break;
        case 8:
            m1 = 2;
            break;
        case 9:
            m1 = 5;
            break;
        case 10:
            m1 = 0;
            break;
        case 11:
            m1 = 3;
            break;
        default:
            m1 = 5;
            break;
        }

        //For year:oopp;;y1,pp,k1
        int pp = y % 100;
        int y1 = pp / 4;

        //for oo:
        int oo = y / 100;
        int k = oo % 4;

        int k1;
        // if (k == 0)
        // {
        //     k1 = 6;
        // }
        // else if (k == 1)
        // {
        //     k1 = 4;
        // }
        // else if (k == 2)
        // {
        //     k1 = 2;
        // }
        // else
        // {
        //     k1 = 0;
        // }
        switch (k)
        {
        case 0:
            k1 = 6;
            break;
        case 1:
            k1 = 4;
            break;
        case 2:
            k1 = 2;
            break;
        default:
            k1 = 0;
            break;
        }

        //leap year: x == -1
        //normal year: x == 0
        int x, z;
        if (y % 4 == 0)
        {
            if (pp == 00)
            {
                if (oo % 4 == 0)
                {
                    x = -1;
                }
                else
                {
                    x = 0;
                }
            }
            else
            {
                x = -1;
            }
        }
        else
        {
            x = 0;
        }

        //count z(leap year case)
        if (m == 1 || m == 2)
        {
            z = x;
        }
        else
        {
            z = 0;
        }

        //for real calendar: f==1
        int f;
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 && d <= 31 && d >= 1)
        {
            f = 1;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11 && d <= 30 && d >= 1)
        {
            f = 1;
        }
        else if (m == 2)
        {
            if (x == -1 && d <= 29 && d >= 1)
            {
                f = 1;
            }
            else if (x == 0 && d <= 28 && d >= 1)
            {
                f = 1;
            }
            else
            {
                f = 0;
            }
        }

        else
        {
            f = 0;
        }

        //continue with sum...
        if (f == 1)
        {
            if (x == -1)
            {
                cout << "Year:Leap" << endl;
            }
            else
            {
                cout << "Year:Normal" << endl;
            }

            cout << "Day:";
            int sum = d + m1 + y1 + pp + k1 + z;
            int g = sum % 7;
            // if (g == 0)
            // {
            //     cout << "Sunday" << endl;
            // }
            // else if (g == 1)
            // {
            //     cout << "Monday" << endl;
            // }
            // else if (g == 2)
            // {
            //     cout << "Tuesday" << endl;
            // }
            // else if (g == 3)
            // {
            //     cout << "Wednesday" << endl;
            // }
            // else if (g == 4)
            // {
            //     cout << "Thursday" << endl;
            // }
            // else if (g == 5)
            // {
            //     cout << "Friday" << endl;
            // }
            // else
            // {
            //     cout << "Saturday" << endl;
            // }
            switch(g){
                case 0:
                cout<<"Sunday"<<endl;
                break;
                 case 1:
                cout<<"Monday"<<endl;
                break;
                 case 2:
                cout<<"Tuesday"<<endl;
                break;
                 case 3:
                cout<<"Wednesday"<<endl;
                break;
                 case 4:
                cout<<"Thursday"<<endl;
                break;
                 case 5:
                cout<<"Friday"<<endl;
                break;
                default:
                cout<<"Saturday"<<endl;
                break;

            }
            cout << "khatam tata bye bye!!!";
        }
        else
        {
            cout << "waah bete waah mauj kardi...." << endl;
        }
    }
    else
    {
        cout << "chutyie insaan 12 hi month hote hein!!" << endl;
    }

    return 0;
}