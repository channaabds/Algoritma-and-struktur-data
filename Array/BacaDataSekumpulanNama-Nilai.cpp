#include <iostream>
using namespace std;

int main (){

    struct siswa
    {
        char nama[25];
        double nilai;
    };
    struct siswa daftar[10];

    int pencacah;
    double jum;
    int ada_gagal;

    pencacah = 0;
    while (pencacah < 5)
    {
        cout << "Nama Siswa : ";
        cin >> daftar[pencacah].nama;

        while (1)
        {
            cout << "Nilai : ";
            cin >> daftar[pencacah].nilai;

            if (daftar[pencacah].nilai >=0  &&  daftar[pencacah].nilai <= 100)
            break;
            else
            cout << "Nilai Harus Terletak Antara" << "0 sampai dengan 100\n";
        }

        pencacah++;
    }

    // Jumlahkan Semua Nilai

    jum = 0;
    pencacah = 0;
    while (pencacah < 5)
    {
        jum = jum + daftar[pencacah].nilai;
        pencacah++;
    }

    // Menampilkan Siswa yg Gagal
    cout << "Siswa yg Gagal : \n";
    ada_gagal = 0;
    pencacah = 0;
    while (pencacah < 5)
    {
        if (daftar[pencacah].nilai < 60)
        {
            ada_gagal = 1;
            cout << daftar[pencacah].nama << endl;
        }

        pencacah++;
    }

    if (ada_gagal == 0)
    cout << "Tak Ada Siswa Gagal\n";

    return 0;
}