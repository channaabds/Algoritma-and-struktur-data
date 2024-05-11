#include <iostream>
using namespace std;

double terkecil(double x, double y)
{
    double min;

    if (x < y)
    min = x;
    else
    min = y;

    return min;
}

int main (){
    double a, b, c;

    a = 45;
    b = 75;
    c = terkecil(a,b);

    cout << "Terkecil dari " << a << " dan " << b << " : " << c << endl;

    return 0;
}