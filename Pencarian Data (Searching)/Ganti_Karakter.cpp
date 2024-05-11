#include <iostream>
#include <cstring>
using namespace std;

char *gantikar(char st[], char c1, char c2)
{
    int i;
    static char stTemp[80];

    strcpy(stTemp, st);

    for (i = 0; i < strlen(stTemp); i++)
    if (stTemp[i] == c1)
    stTemp[i] = c2;

    return (char *) stTemp;
}

int main (){
    char kalimat[] = "Bisa! maka kau bisa";

    cout << gantikar(kalimat, 'a', 'k') << "\n";
    
    return 0;
}