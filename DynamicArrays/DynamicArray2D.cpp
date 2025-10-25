#include <iostream>

using namespace std;

int main()
{
int Rows=3,Columns=3;

int **Array2D=new int*[Rows];

for(int i=0 ; i<Rows ; i++){
Array2D[i]=new int[Columns];
}

Array2D[0][0]=5;
cout<<Array2D[0][0]<<endl;

for(int i=0 ; i<Rows ; i++){
delete[] Array2D[i];
}

delete[] Array2D;
}