#include <iostream>

using namespace std;

void printArray (int a[], int t)
{
    for (int i = 0; i < t; i++)
        cout << a[i] << " ";
}
int sumaArrayI (int a[], int t)
{
    int c = 0;
    for (int i = 0; i < t; i++)
        c += a[i];
    return c;
}

int sumaArrayR (int a[], int t)
{
    if (!t)
        return 0;
    return a[0] + sumaArrayR(a + 1, --t);
}

int swapArrayI (int a[], int t)
{
    for (int i = 0; i < (t/2) ; i++)
    {
        int aux = a[i];
        a[i] = a[t-1];
        a[--t] = aux;
    }
    return 1;
}

int swapArrayR(int a[], int t)
{
    if (t/2 == 0)
        return 0;
    int aux = a[0];
    a[0] = a[t-1];
    a[--t] = aux;
    return swapArrayR(a + 1, t-1);
}

int ordenarArray (int a[], int t)
{

}



int main()
{
    int a [5] = {1, 4, 5, 6, 3};
   // printArray(a,4);
   //cout << sumaArrayI(a, 4) << endl;
   //cout << sumaArrayR(a, 4) << endl;
    //swapArrayI(a, 5);
    swapArrayR(a, 5);
    printArray(a, 5);


    return 0;
}
