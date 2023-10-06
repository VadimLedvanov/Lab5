#include <iostream>
#include <ctime> // заголовочный файл для работы с временем.
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    /*
        srand() - функция для установки базы генератора псевдослучайных чисел
        time(NULL) - аргумент этой функции, который позволяет установить текущее время,
        чтобы установить его в качестве базы для непредсказуемости результата генерации чисел
    */
    srand(time(NULL));

    // объявление и инициализация целочисленных переменных
    int a, b, c;
    int k = 0;
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        // инициализация операндов случайными числами от 1 до 10
        // rand() возвращает случайно число от нуля до 2 147 483 647
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;

        if (a * b != c)
        {
            v2.push_back(c);
            k++; // инкремент
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else {
            v1.push_back(c);
        }
    }

    cout << "\nAll: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << ends;
    }
    cout << "\nCount error: " << k << endl;

    cout << "\nGood: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << ends;
    }

    cout << "\nBad: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << ends;
    }
    return 0;
}
