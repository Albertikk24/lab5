/********************************************************
 * Автор:     Иккерт А.С.                               *
 * Название:  Использование процедур и функций          *
 * Вариант:   7                                         *
 ********************************************************/


#include <iostream>
using namespace std;

// Function to count positive elements in interval
int countPositiveInInterval(double array[], int size, double leftBound, double rightBound) {
    int count = 0;
    for (int index = 0; index < size; ++index) {
        if (array[index] > 0 && array[index] > leftBound && array[index] < rightBound) {
            ++count;
        }
    }
    return count;
}

int main() {
    int sizeV, sizeW;
    double leftBound, rightBound;
    
    cout << "Enter sizes of arrays V and W: ";
    cin >> sizeV >> sizeW;
    
    cout << "Enter interval boundaries (a b): ";
    cin >> leftBound >> rightBound;
    
    double arrayV[sizeV], arrayW[sizeW];
    
    cout << "Enter elements of array V: ";
    for (int index = 0; index < sizeV; ++index) {
        cin >> arrayV[index];
    }
    
    cout << "Enter elements of array W: ";
    for (int index = 0; index < sizeW; ++index) {
        cin >> arrayW[index];
    }
    
    // Count using function
    int countV = countPositiveInInterval(arrayV, sizeV, leftBound, rightBound);
    int countW = countPositiveInInterval(arrayW, sizeW, leftBound, rightBound);
    
    // Output results
    cout << "Number of positive elements in interval (" << leftBound << ", " << rightBound << "):" << endl << "Array V: " << countV << endl << "Array W: " << countW << endl;
    
    return 0;
}