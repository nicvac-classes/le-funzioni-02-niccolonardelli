#include <iostream>
using namespace std;
int massimo (int n1, int n2)
{
    int max;
    if (n1 >n2)
    {
        max =n1;
    }
    else
    {
        max = n2;
    }
    return max;
}
void main()
{
    int n1, n2, n3, n4, max;
    cout << "inserisci 4 valori" << endl;
    cin >>n1>>n2>>n3>>n4;
    max =massimo(n1,n2);
    max = massimo ( n3, max);
    max = massimo (n4, max);
    cout << "il valore massimo è " << max  << endl;
}
//LEGGERE LE ISTRUZIONI NEL FILE README.md
