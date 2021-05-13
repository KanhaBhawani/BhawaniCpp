//**********this code is developed by Kanha Bhawani**************
#include <iostream>
#include <cmath>
using namespace std;
class ab{
    protected:
    int a, b;
    public:
    void set_number(int x, int y=0){
        a=x;
        b=y;
    }
};
class simpleCal : virtual public ab
{
    // int a, b;

public:
    // void get_number(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }

    // simpleCal(int x, int y)
    // {
    //     a = x, b = y;
    // }
    // simpleCal() {}
    void sum();
    void difference();
    void product();
    void divide();
};
void simpleCal::sum()
{
    cout << "sum of given numbers is " << a + b << endl;
}
void simpleCal::difference()
{
    cout << "sum of given numbers is " << a - b << endl;
}
void simpleCal::product()
{
    cout << "sum of given numbers is " << a * b << endl;
}
void simpleCal::divide()
{
    cout << "sum of given numbers is: " << a / b << endl;
}

class sciCal : virtual public ab
{
    // int a, b;

public:
    // void get_number(int x, int y=0)
    // {
    //     a = x;
    //     b = y;
    // } 

    // sciCal(){};
    // sciCal(int x)
    // {
    //     a = x;
    // };
    // sciCal(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // };

    void sq_root();
    void power();
    void sine();
    void cosine();
};
void sciCal::sq_root()
{
    cout << "Sq-root: " << sqrt(a) << endl;
}
void sciCal::power()
{
    cout << a << " to the power " << b << ": " << pow(a, b) << endl;
}
void sciCal::sine()
{
    cout << "sine of " << a << ": " << sin(a) << endl;
}
void sciCal::cosine()
{
    cout << "cosine of " << a << ": " << cos(a) << endl;
}

class hybriCal : public simpleCal, public sciCal
{
    // int a, b;
    
public:
    //     void get_number(int x, int y=0)
    // {
    //     simpleCal::get_number(x,y);
    //     sciCal::get_number(x,y);

    //     a = x;
    //     b = y;
    // }
    // hybriCal(int x)
    // {
    //     a = x;
    // }
    // hybriCal(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }
};

int main()
{
    hybriCal a;
    a.set_number(0,7);
    a.cosine();
    a.difference();
    a.sine();
    a.sum();

    sciCal q;
    q.set_number(4,2);
    q.sq_root();
    q.power();

    simpleCal p;
    p.set_number(3,6);
    p.sum();
    p.difference();
    p.product();

    return 0;
}