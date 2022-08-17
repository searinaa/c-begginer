#include <iostream>
#include <ctime>
using namespace std;

//МАССИВЫ И ГЕНЕРАТОР СЛУЧАЙНЫХ ЧИСЕЛ
/*
sizeof(x)
rand() % 10
srand(time(NULL)
#include <ctime>
arr[x][y] = {{}, {}...}
*/

int main() {
    setlocale(LC_ALL, "Russian");
    //srand(time(NULL));
    int const SIZE = 10;
    int arr[SIZE];
    
    for (int i=0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 5;
        //cout << arr[i] << endl;
    }
    int const ROW = 3;
    int const COL = 2;
    int arr_two[ROW][COL];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr_two[i][j] = rand() % 10;
            cout << "Номер ячейки" << i << j << " " << arr_two[i][j] << "\t";
        }
        cout << endl;
    }
}
