#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("nr.txt");
    int ord[100];
    int x;
    int i = 0;
    while(fin >> x)
    {
        if(x > 0)
        {
            ord[i] = x;
            i++;
        }
    }
    int cnt = i;
    int nrMin = ord[0];
    int nrMax = ord[0];
    for(int i=0; i<cnt; i++)
    {
        if(ord[i] > nrMax)
         nrMax = ord[i];
        if(ord [i] < nrMin)
         nrMin = ord[i];
    }
    i = 0;
    while(i <= nrMax)
    {
        for(int j=0; j<cnt; j++)
        {
            if(ord[j] == i)
             cout << ord[j] << " ";
        }
        i++;
    }
    return 0;
}