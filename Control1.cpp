
#include <iostream>
using namespace std;


void inputMas(const int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> arr[i];
    }
}

int sumMas(const int n, int arr[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    return s;
}

int sumNeg(const int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            sum += arr[i];
    }
    return sum;
}


int sumPos(const int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
}

int sumEv(const int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int sumOd(const int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            sum += arr[i];
    }
    return sum;
}

int getIndexMax(const int n, int arr[])
{
    int maxEl = -10e-10;
    int maxElemIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxEl)
        {
            maxEl = arr[i];
            maxElemIndex = i;
        }
    }
    return maxElemIndex;
}


int getIndexMin(const int n, int arr[])
{
    int minEl = 10e+10;
    int minElemIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minEl)
        {
            minEl = arr[i];
            minElemIndex = i;
        }
    }
    return minElemIndex;
}

int getPrBetwMaxMin(int n, int arr[], int maxElemInd, int minElemInd)
{
    int prBetwMaxMin = 1;
    for (int i = min(maxElemInd, minElemInd) + 1; i < max(maxElemInd, minElemInd); i++)
    {
        prBetwMaxMin *= arr[i];
    }
    return prBetwMaxMin;
}

void sortMas(int n, int arr[])
{
    int min = 0;
    int buf = 0;

    // сортировка выбором
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (arr[j] < arr[min]) ? j : min;

        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
}

int main()
{
    const int n = 10;
    int mas[n];

    inputMas(n, mas);

    int s = sumMas(n, mas);

    double medium = 1.0 * s / n;

    int sumNegative = sumNeg(n, mas);

    int sumPositive = sumPos(n, mas);

    int sumEven = sumEv(n, mas);
    int sumOdd = sumOd(n, mas);
    
    int maxElemIndex = getIndexMax(n, mas);
    int minElemIndex = getIndexMin(n, mas);
    int prBetwMaxMin = getPrBetwMaxMin(n, mas, maxElemIndex, minElemIndex);

    cout << "sum = " << s << endl;
    cout << "medium = " << medium << endl;
    cout << "sumPositive = " << sumPositive << endl;
    cout << "sumNegative = " << sumNegative << endl;
    cout << "sumEven = " << sumEven << endl;
    cout << "sumOdd = " << sumOdd << endl;
    cout << "maxElemIndex = " << maxElemIndex << endl;
    cout << "minElemIndex = " << minElemIndex << endl;
    cout << "prBetwMaxMin = " << prBetwMaxMin << endl;

    sortMas(n, mas);
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << endl;
    }
}
