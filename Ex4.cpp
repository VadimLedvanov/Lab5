#include <iostream>
using namespace std;

//пузырьковая сортировка
void bubble_sort(int Arr[], int N, bool (*compare) (int a, int b))
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((*compare) (Arr[j], Arr[j + 1]))
                swap(Arr[j], Arr[j + 1]);
        }
    }
}

bool from_min(int a, int b);
bool from_max(int a, int b);


bool from_min(int a, int b)
{
    return a > b;
}

bool from_max(int a, int b)
{
    return a < b;
}

void show_array(int, int);

void show_array(int Arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}


int main()
{
    system("chcp 1251");

    bool (*from_f[2]) (int, int) = { from_min, from_max };
    int N;
    cout << "Введите размер массивa: ";
    cin >> N;

    int my_choose = 0;
    int* myArray = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "maArray[" << i << "] = "; cin >> myArray[i];
    }
    
    cout << "1. Сортировать по возрастанию\n";
    cout << "2. Сортировать по убыванию\n";
    cin >> my_choose;
    cout << "Исходные данные: ";
    show_array(myArray, N);

    bubble_sort(myArray, N, (*from_f[my_choose - 1]));

    show_array(myArray, N);
    delete[]myArray;
    return 0;
}