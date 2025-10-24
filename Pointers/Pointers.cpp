#include <iostream>

using namespace std;

int main()
{
int Value1=5; // Define And Store A Integer Variable Have A Value Equal 5 As A 4 Bytes In Memory (RAM)

int *Ptr;//= &Value1 ; // Define And Store A Integer Pointer Variable Have Value Equal A Address Of  Value1 In Memory And Store  As A 4 Bytes In Memory (RAM)

cout<<Ptr<<endl; // This Is A Value Of Ptr Is Equal The Address Of Value1
cout<<&Value1<<endl; // This Is The Is Address Of Value1


cout<<*Ptr<<endl; // This Is A Value Of Address Stored In Ptr (Original Value Of Value1)
cout<<Value1<<endl; // This Is The Normal Value Of Value1

cout<<&Ptr<<endl; // This Is A Address Of Ptr As A Variable Not Pointer


return 0;
}