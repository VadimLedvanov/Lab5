
#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }



    double medium = 1.0 * s / n;

    int sumNegative = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
            sumNegative += mas[i];
    }

    int sumPositive = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
            sumPositive += mas[i];
    }

    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sumEven += mas[i];
        else
            sumOdd += mas[i];
    }


    int minEl = 10e+10;
    int maxEl = -10e-10;
    int maxElemIndex = 0;
    int minElemIndex = 0;
    int prBetwMaxMin = 1;

    for (int i = 1; i < n; i++)
    {
        if (mas[i] > maxEl)
        {
            maxEl = mas[i];
            maxElemIndex = i;
        }
        if (mas[i] < minEl)
        {
            minEl = mas[i];
            minElemIndex = i;
        }
    }

    for (int i = min(maxElemIndex, minElemIndex) + 1; i < max(maxElemIndex, minElemIndex); i++)
    {
        prBetwMaxMin *= mas[i];
    }



    cout << "sum = " << s << endl;
    cout <<"medium = " << medium << endl;
    cout << "sumPositive = " << sumPositive << endl;
    cout << "sumNegative = " << sumNegative << endl;
    cout << "sumEven = " << sumEven << endl;
    cout << "sumOdd = " << sumOdd << endl;
    cout << "maxElemIndex = " << maxElemIndex << endl;
    cout << "minElemIndex = " << minElemIndex << endl;
    cout << "prBetwMaxMin = " << prBetwMaxMin << endl;

}
