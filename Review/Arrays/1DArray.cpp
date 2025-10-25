#include <iostream>

using namespace std;

// Array In Memory Stored Sequency In Memory But in Auto Place

int main()
{

    // DataTypeOfArrayElements NameOfArray[NumberOfElements] = {ValueOfElementsWith(,)} ;
    int Array1D[5] = {1, 2, 3, 4, 5};

    cout << Array1D[0] << endl; // First Element Of Array Equal Zero Array Beging Zero

    cout << &Array1D[0] << endl; // Example For Address 0x7fffde013e90
    cout << &Array1D[1] << endl; // Example For Address 0x7fffde013e94 This Store In Memory After 1Byte(4Bits) Of From First Element
    int *P0 = &Array1D[0];
    int *P1 = &Array1D[1];
    // P0=(P1+1);

    cout << *(P0 + 1) << endl; // This Equal Array[1]
    return 0;
}