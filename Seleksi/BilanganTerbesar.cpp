// #include <iostream>
// using namespace std;

// int main (){
//     double x,y,terbesar;

//     cout << " Masukan x = ";
//     cin >> x;

//     cout << " Masukan y = ";
//     cin >> y;

//     // Mengasumsikan bahwa nilai yg terbesar adalah x
//     terbesar = x;

//     if (terbesar < y)
//     terbesar = y;

//     cout << "Bilangan terbesar = " <<terbesar<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main (){
    double x,y;

    cout << "Masukan x = ";
    cin >> x;

    cout << " Masukan y = ";
    cin >> y;

    if (x > y)
    cout << " Bilangan terbesar = " <<x<<endl;
    else
    cout << " Bilangan terbesar = " <<y<<endl;

    return 0;        
    
}