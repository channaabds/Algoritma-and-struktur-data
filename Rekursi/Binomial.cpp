#include <iostream>
using namespace std;

long binom(int n, int k)
{
    if (k == 0)
    return 1;
    else if (k == n)
    return 1;
    else
    return binom(n-1, k-1) + binom(n-1, k);
}

int main (){
    cout << binom(1,1) << endl;
    cout << binom(5,3) << endl;
    cout << binom(7,2) << endl;
    cout << binom(7,5) << endl;
    cout << binom(11,7) << endl;

    return 0;
}