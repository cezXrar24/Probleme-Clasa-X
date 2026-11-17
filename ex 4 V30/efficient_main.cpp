#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("numere.in");
    float x;
    fin >> x;
    cout << "[" << floor(x) << "," << ceil(x) << "]" << endl;
    int temp = int(x);
    while(fin >> x)
    {
        if(int(x) != temp)
        {
            cout << "[" << floor(x) << "," << ceil(x) << "]" << endl;
            temp = int(x);
        }
        else
        {
            fin >> x;
        }
    }
    return 0;
}