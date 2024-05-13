#include <iostream>
using namespace std;

int main (){
    int m,n,r ;
    cout << "Masukan Nilai M = ";
    cin >> m;

    cout << "Masukan Nilai N = ";
    cin >> n;

    r = m % n;
    while (r !=0) {
        m = n;
        n = r;
        r = m % n;
    }
    cout << "FPB = " <<n;
}