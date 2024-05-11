#include <iostream>
using namespace std;

int main (){
    double x,y,z,terbesar;

    cout <<"Bilangan X = ";
    cin >> x;

    cout <<"Bilangan Y = ";
    cin >> y;
    
    cout <<"Bilangan Z = ";
    cin >> z;

    if (x > y  &&  x > z)
    terbesar = x;
    else if (y > x  &&  y > z)
    terbesar = y;
    else
    terbesar = z;

    cout <<"Terbesar Adalah = " <<terbesar;

    return 0;
    
}