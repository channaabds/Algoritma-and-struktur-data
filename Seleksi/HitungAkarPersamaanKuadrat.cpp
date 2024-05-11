// ==============================================================================================
// Menentukan akar persamaan kuadrat ax2 + bx + c = 0
// Pada GNU atau Linux, kompilasilah dengan memberikan perintah : gcc -lm perskuad.c -0 perskuad
// -----------------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double a,b,c;
    double diskriminan, x1,x2, re, im;

    cout <<"Persamaan Kuadrat"  <<endl;

    cout <<"a = ";
    cin >> a;

    cout <<"b = ";
    cin >> b;

    cout <<"c = ";
    cin >> c;

    // Hitung Diskriminan
    diskriminan = b * b - 4 * a * c;
    // Evaluasi Diskriminan
    if (diskriminan > 0)
    {
        x1 = (-b + sqrt (diskriminan)) / (2*a);
        x2 = (-b - sqrt (diskriminan)) / (2*a);
        cout <<"Akar Real  "<<endl;
        cout <<"x1 =  "<< x1 <<endl;
        cout <<"x2 =  "<< x2 <<endl;
    }
    else if (diskriminan == 0)
    {
        x1 = -b / (2*a);
        x2 = x1;
        cout <<"Akar Kembar  "<<endl;
        cout <<"x1 =  "<< x1  <<endl;
        cout <<"x2 =  "<< x2 <<endl;
    }
    else // Diskriminan < 0
    {
        re = -b / (2*a);
        im = sqrt (fabs (diskriminan)) / (2*a);
        cout <<"Akar Kompleks"<<endl;
        cout <<"x1 =  " << re << "+" << im <<endl;
        cout <<"x2 =  " << re << "-" << im <<endl;
    }

return 0;


}