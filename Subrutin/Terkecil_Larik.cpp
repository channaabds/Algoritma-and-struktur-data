#include <iostream>
using namespace std;

double terkecil(double x[], int jum)
{
    int i;
    double min;

    min = x[0];
    for (i=1; i < jum; i++)
    if (x[i] < min)
    min = x[i];

    return min;
}

int main (){
    double y;
    double data[] = {111, 2222, 3456, 1231, 5667, 9000};

    y = terkecil(data, 6);

    cout << "Terkecil = " << y << endl;

    return 0;
}