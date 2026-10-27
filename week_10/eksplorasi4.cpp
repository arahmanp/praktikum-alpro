#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100000; i++)
    {
        int *p = new int[250000];

        for (int j = 0; j < 250000; j++)
            p[j] = j;

        cout << "Iterasi " << i << ": alamat p = " << p << '\n';

        delete[] p;
    }

    cin.get();
    return 0;
}