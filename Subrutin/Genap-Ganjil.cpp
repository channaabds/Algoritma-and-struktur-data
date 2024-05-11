#include <iostream>
using namespace std;

int ganjil(int bil)
{
    if (bil % 2 == 1)
    return 1;
    else
    return 0;
}

int main (){
    cout << ganjil(200) << endl;
    cout << ganjil(125) << endl;
    cout << ganjil(300) << endl;
    cout << ganjil(234) << endl;
    cout << ganjil(24) << endl;

    return 0;
}