#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n;
    fin >> n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        fin >> v[i];
    }
    int cnt1 = 0;
    int cnt2 = 0;
    int index, temp;
    for(int i=0; i<n; i++)
    {
        if(cnt2 == 0 && v[i+1] > v[i])
        {
            cnt2++;
            temp = i;
        }
        else if(cnt2 > 0 && !(v[i+1] > v[i]))
        {
            cnt2 = 0;
            temp = i+1;
        }
        else if(cnt2 > 0 && v[i+1] > v[i])
        {
            cnt2++;
        }
        if(cnt2 > cnt1)
        {
            cnt1 = cnt2;
            index = temp;
        }
    }
    cout << "INDEX = " << index << endl;
    for(int j=0; j<=cnt1; j++)
    {
        cout << v[index + j] << " ";
    }
    return 0;
}