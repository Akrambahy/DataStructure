#include <iostream>

using namespace std;

// (New) this Word Means I will Store This Variable in Heap

// Example new int ; i Reserved 4(int) Bytes In Heap

// Normal Dynamic Definition Datatype *VariableName = new DataType(Value) : We Must Deleting Array After Using By {delete VariableName;}

int main()
{
// DataType *ArrayName= new DataType[NumberOfElement] (Using malloc in C) 
 int *Array1D =new int[5];


// We Must Deleting Dynamic Array After Using By {delete[] ArrayName;}
delete[] Array1D;
}