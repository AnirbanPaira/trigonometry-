#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double m = 30, n = 60, p = 45;
    double x, y, z;
    x = (22.0 / (7.0 * 180.0)) * m;
    y = (22.0 / (7.0 * 180.0)) * n;
    z = (22.0 / (7.0 * 180.0)) * p;
    cout << "The trigonometry values are" << endl;
    cout << "The values of sin 30  degree=" << sin(x) << endl;
    cout << "The value of cos 60 degree =" << cos(y) << endl;
    cout << "The value of tan 45 degree =" << tan(z) << endl;
}
