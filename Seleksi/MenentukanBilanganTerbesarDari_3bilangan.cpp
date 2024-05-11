#include <iostream>
using namespace std;

int main (){
    double x,y,z,terbesar;

    cout <<"Masukan Bilangan X = " ;
    cin >> x;

    cout <<"Masukan Bilangan Y = ";
    cin >> y;

    cout << "Masukan Bilangan z = ";
    cin >> z;

    terbesar = x;    // Anggap dulu yg terbesar adl X

    if (terbesar < y) terbesar = y;  // Bandingkan dgn Y
    
    if (terbesar < z) terbesar = z;  // Bandingkan dgn Z

    cout <<"Terbesar = " <<terbesar;

    return 0;


}