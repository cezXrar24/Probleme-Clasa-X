#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int n;
    int x;
    int exista = 0;
    cout << "Introdu n: "; cin >> n;
    while(fin >> x)
    {
        if(x % n == 0)
        {
            cout << x << " ";
            exista = 1;
        }
    }
    if(exista == 0)
     cout << "NU EXISTA";
    return 0;
}