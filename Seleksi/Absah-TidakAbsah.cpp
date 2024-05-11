#include <iostream>
using namespace std;

int main (){
    double nilai;
    cout << " Masukan Nilai Ujian = ";
    cin >>nilai;
    if (nilai >=0  &&  nilai<=100)
    cout << "Absah"<<endl;
    else
    cout << "Tidak Absah"<<endl;

    return 0;
}