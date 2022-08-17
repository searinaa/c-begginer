/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int count;
    char symbol;
    int linenumb;
    
    cout << "Введите число символов" << endl;
    cin >> count;
    cout << "Введите символ, который нужно повторить" << endl;
    cin >> symbol;
    cout << "Введите номер подходящего варианта вывода (1 или 2): " << endl
    << "1) горизонтальный" << endl
    << "2) вертикальный" << endl;
    cin >> linenumb;
    
    
    switch(linenumb) {
        case 1:
            while(count > 0) {
                cout << symbol;
                count -= 1;
            }
            break;
        case 2:
            while(count > 0) {
                    cout << symbol << endl;
                    count -= 1;
                }
                break;
            
    }
    return 0;
}
