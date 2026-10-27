
#include "Functions.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Create(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 15 + rand() % 71;
}

void Print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

bool Check(int value, int index)
{
    return value % 2 != 0 && index % 13 != 0;
}

int Count(const int a[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if (Check(a[i], i))
            k++;
    return k;
}

int Sum(const int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (Check(a[i], i))
            s += a[i];
    return s;
}

void Replace(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (Check(a[i], i))
            a[i] = 0;
}
