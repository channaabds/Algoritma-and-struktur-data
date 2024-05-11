#include <iostream>
using namespace std;

int main (){
    int a[6] = {1,2,3,4,5,6};
    int b[6] = {1,2,3,4,5,6};
    int c[6];

    int i;

    for (i=0; i<=5; i++)
    c[i] = a[i] + b[i];

    for (i=0; i<=5; i++)
    cout << c[i] <<endl;

    return 0;
}