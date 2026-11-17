#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n;
    fin >> n;
    int v[3*n];
    for(int i=0; i<3*n; i++)
    {
        fin >> v[i];
    }
    int par1;
    int imparu;
    int exista1 = 0;
    int existau = 0;
    int pos1, pos2;
    for(int i=0; i<n; i++)
    {
        if(v[i] % 2 == 0 && exista1 == 0)
        {
            par1 = v[i];
            pos1 = i;
            exista1 = 1;
        }
        if(v[3*n-1-i] % 2 != 0 && existau == 0)
        {
            imparu = v[3*n-1-i];
            pos2 = 3*n - 1 - i;
            existau = 1;
        }
        if(exista1 == 1 && existau == 1)
         i=n;
    }
    cout << "Primmul par: " << par1 << endl;
    cout << "ultimul impar: " << imparu << endl;
    v[pos2] = par1;
    v[pos1] = imparu;
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i=n; i<2*n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i=2*n; i<3*n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}