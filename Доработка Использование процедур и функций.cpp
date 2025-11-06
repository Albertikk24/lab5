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
    // Variable declaration
    int sizeV, sizeW, countV, countW;
    double leftBound, rightBound;

    // Input sizes
    cout << "Enter sizes of arrays V and W: ";
    cin >> sizeV >> sizeW;

    // Input interval boundaries
    cout << "Enter interval boundaries (a b): ";
    cin >> leftBound >> rightBound;

    // Array declaration
    double arrayV[sizeV], arrayW[sizeW];

    // Input array V
    cout << "Enter elements of array V: ";
    for (int index = 0; index < sizeV; ++index) {
        cin >> arrayV[index];
    }

    // Input array W
    cout << "Enter elements of array W: ";
    for (int index = 0; index < sizeW; ++index) {
        cin >> arrayW[index];
    }

    // Calculations
    countV = countPositiveInInterval(arrayV, sizeV, leftBound, rightBound);
    countW = countPositiveInInterval(arrayW, sizeW, leftBound, rightBound);

    // Output results
    cout << "Number of positive elements in interval (" << leftBound << ", " << rightBound << "):" << endl;
    cout << "Array V: " << countV << endl;
    cout << "Array W: " << countW << endl;

    return 0;
}