#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int fr[900];
    for(int i=100; i<=999; i++)
    {
        fr[i-100] = i;
    }
    int x;
    int cnt = 0;
    while(fin >> x)
    {
        if(x >= 100 && x <= 999)
        {
            fr[x-100] = 0;
        }
    }
    for(int i=899; i>=0; i--)
    {
        if(fr[i] > 0)
        {
            cout << fr[i] << " ";
            cnt++;
        }
        if(cnt == 2)
         i = -1;
    }
    return 0;
}