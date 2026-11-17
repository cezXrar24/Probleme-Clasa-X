#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n;
    fin >> n;
    int x;
    int spp = 0;
    int prima = 0;
    while(fin >> x)
    {
        if(x == 1 || x == 4)
        {
            if(prima == 0)
            {
                cout << x << " ";
            }
            else if(prima == 1)
            {
                cout << " + " << x;
            }
            prima = 1;
            spp += x;
        }
        for(int i=1; i<x/2; i++)
        {
            int nrp = i*i;
            if(x == nrp)
            {
                if(prima == 0)
            {
                cout << x << " ";
            }
            else if(prima == 1)
            {
                cout << " + " << x;
            }
            prima = 1;
            spp += x;
            }
            else if(nrp > x)
            i = x;
        }
    }
    cout << " = " << spp << endl;
    return 0;
}