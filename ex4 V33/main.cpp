#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("numere.txt");
    int n; fin>>n;
    n = n*n;
    int max1 = 99;
    int max2 = 0;
    int y;
    while(n > 0)
    {
        int i; fin>>i;
        if(i > max1 && i < 1000)
        {
            max2 = max1;
            max1 = i;
        }
        else if(i > max2 && i != max1 && i < 1000)
        {
            max2 == i;
        }
        else if(i > 1000 && i < y)
        {
            y = i;
        }
        n--;
    }
    if(abs(max1 - max2) < abs(max1 - y))
     y = max2;
    cout << max1 << " " << y << endl;
    return 0;
}