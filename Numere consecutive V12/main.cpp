#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin1("nr1.txt");
    ifstream fin2("nr2.txt");
    int v[100];
    int x, y;
    int i = 0;
    while(fin1 >> x)
    {
        if(x % 5 == 0)
        {
            v[i] = x;
            i++;
        }
    }
    while(fin2 >> y)
    {
        if(y % 5 == 0)
        {
            v[i] = y;
            i++;
        }
    }
    int cnt = i;
    int nrMin = v[0];
    int nrMax = v[0];
    for(int i=0; i<cnt; i++)
    {
        if(v[i] < nrMin)
         nrMin = v[i];
        if(v[i] > nrMax)
         nrMax = v[i];
    }
    for(int i=nrMin; i<=nrMax; i++)
    {
        for(int j=0; j<cnt; j++)
        {
            if(v[j] == i)
            {
                cout << v[j] << " ";
                i++;
            }
        }
    }
    return 0;
}