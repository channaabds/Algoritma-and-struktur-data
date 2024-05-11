#include <iostream>
using namespace std;

void tukar(double &x, double &y)
{
    double z;

    z = x;
    x = y;
    y = z;
}

int main (){
    double a, b;

    a = 1;
    b = 7;

    tukar(a,b);

    cout << "a = " << a << "  b = " << b << endl;

    return 0;
}