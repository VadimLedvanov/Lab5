#include <iostream>

using namespace std;

int Transposition(int arr[], int el, int n);


//алгоритм транспозиции
int Transposition(int arr[], int el, int n) {
    int ind;

    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            ind = i;

            if (ind == 0) {
                break;
            }
            else {
                swap(arr[i], arr[i - 1]);
            }
        }
    }

    return ind;
}
int main() {
    int arr[] = { 123, 92, 26, 38, 543, 24, 176, 19, 48, 23 };

    //Для демонстрации работы алгоритма
    for (int i = 0; i < 10; i++) {
        cout << "Index of 23 is " << Transposition(arr, 23, 10) << endl;
    }
    /*
        Index of 23 is 9
        Index of 23 is 8
        Index of 23 is 7
        Index of 23 is 6
        Index of 23 is 5
        Index of 23 is 4
        Index of 23 is 3
        Index of 23 is 2
        Index of 23 is 1
        Index of 23 is 0
    */
    return 0;
}
