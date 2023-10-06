#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void main(int argc, char* argv[])
{

    system("chcp 1251");
    bool f = true;
    if (argc != 4)
    {
        cout << "Неверное количество параметров!" << endl;
        f = false;
    }
    else if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0)
    {
        cout << "Неверный параметр!" << endl;
        f = false;
    }
        
    
    if (f) {
        if (strncmp(argv[1], "-a", 2) == 0)
            cout << "Сумма = " << stoi(argv[2]) + stoi(argv[3]) << endl;
        else if (strncmp(argv[1], "-m", 2) == 0)
            cout << "Произведение = " << stoi(argv[2]) * stoi(argv[3]) << endl;
    }
    
}