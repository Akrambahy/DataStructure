#include <iostream>

using namespace std;

// 2DArray In Memory Stored As A Array Divided Sequency In Memory

int main()
{
// DataTypeOfArrayElements NameOfArray[NumberOfArrays(Rows)][NumberOfArraysElements(Columns)] = {Arrays{ValueOfArrayElementsWith(,)}} ;

int Array2D[2][3]={{1,3,5} , {5,8,9} };

    cout << Array2D[0][0] << endl; // First Element Of Array Equal ZeroRow And ZeroColum Array Beging ZeroAndZero

cout<<Array2D<<endl; // Output Is Equal The Address Of First Element Of All (Array2D[0])
cout<<*Array2D<<endl; // Output Is Equal The Address Of First Element(Array2D[0][0])
cout<<**Array2D<<endl; // Output Is Equal The Value Of First Element(Array2D[[0][0])

cout<<(Array2D+1)<<endl; // Output Is Equal(The Address Of First Element + (SizeOf(Datatype) Number Of Elements In First Array) )
cout<<*(Array2D+1)<<endl; // Output Is Equal The Address Of First Element(Array2D[1][0])
cout<<**(Array2D+1)<<endl; // Output Is Equal The Value Of First Element(Array2D[[0][0])

    return 0;
}