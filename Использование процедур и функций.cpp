/********************************************************
 * Автор:     Иккерт А.С.                               *
 * Название:  Использование процедур и функций          *
 * Вариант:   7                                         *
 ********************************************************/

#include <iostream>

using namespace std;

int main() {
    int sizeV, sizeW;
    double leftBound, rightBound;
    
    cout << "Enter sizes of arrays V and W: ";
    cin >> sizeV >> sizeW;
    
    cout << "Enter interval boundaries (a b): ";
    cin >> leftBound >> rightBound;
    
    double arrayV[sizeV], arrayW[sizeW];
    
    cout << "Enter elements of array V: ";
    for (int index = 0; index < sizeV; index++) {
        cin >> arrayV[index];
    }
    
    cout << "Enter elements of array W: ";
    for (int index = 0; index < sizeW; index++) {
        cin >> arrayW[index];
    }
    
    // Подсчет для массива V
    int countV = 0;
    for (int index = 0; index < sizeV; index++) {
        if (arrayV[index] > 0 && arrayV[index] > leftBound && arrayV[index] < rightBound) {
            countV++;
        }
    }
    
    // Подсчет для массива W
    int countW = 0;
    for (int index = 0; index < sizeW; index++) {
        if (arrayW[index] > 0 && arrayW[index] > leftBound && arrayW[index] < rightBound) {
            countW++;
        }
    }
    
    // Вывод результатов
    cout << "Number of positive elements in interval (" << leftBound << ", " << rightBound << "):" << endl;
    cout << "Array V: " << countV << endl;
    cout << "Array W: " << countW << endl;
    
    return 0;
}