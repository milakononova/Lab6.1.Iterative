
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Functions.h"
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    const int N = 21;
    int a[N];

    Create(a, N);

    cout << "Original array:" << endl;
    Print(a, N);

    cout << "Count = " << Count(a, N) << endl;
    cout << "Sum = " << Sum(a, N) << endl;

    Replace(a, N);

    cout << "Modified array:" << endl;
    Print(a, N);

    return 0;
}
