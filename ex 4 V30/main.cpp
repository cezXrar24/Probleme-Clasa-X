#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("numere.in");
    float fr[1000000] = {0.0};
    int nMax = fr[0];
    int nMin = fr[0];
    float x;
    while(fin >> x)
    {
        fr[int(x)] = x;
        if(x < nMin)
         nMin = x;
        if(x > nMax)
         nMax = x;
    }
    for(int i=nMin; i<=nMax; i++)
    {
        if(fr[i] > 0)
         cout << "[" << i << "," << i+1 << "]" << endl;
    }
    return 0;
}