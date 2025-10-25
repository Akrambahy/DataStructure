#include <iostream>

using namespace std;

int main()
{
    int Value1 = 5; // Define And Store A Integer Variable Have A Value Equal 5 As A 4 Bytes In Memory (RAM)

    int *Ptr1 = &Value1; // Define And Store A Integer Pointer Variable Have Value Equal A Address Of  Value1 In Memory And Store  As A 4 Bytes In Memory (RAM)

    cout << Ptr1 << endl;    // This Is A Value Of Ptr Is Equal The Address Of Value1
    cout << &Value1 << endl; // This Is The Is Address Of Value1

    cout << *Ptr1 << endl;  // This Is A Value Of Address Stored In Ptr1 (Original Value Of Value1)
    cout << Value1 << endl; // This Is The Normal Value Of Value1

    cout << &Ptr1 << endl; // This Is A Address Of Ptr As A Variable Not Pointer

    int Value2 = 5;
    int *Ptr2 = &Value2;
    // Is A Right Format Integer Pointer Pointe To A Address Of Integer Variable In Stack

    char Value3 = 'A';
    // int *Ptr3= &Value3;
    //  Is A Wrong Format Integer Pointer Pointe To A Address Of Char Variable Because Pointer Store In 4 Bytes And A Char Just Have A 1 Byte

    char Value4 = 5;
    char *Ptr4 = &Value4;
    // Is A Right Format Char Pointer Pointe To A Address Of char Variable

    int Value5 = 5;
    // char *Ptr5= &Value2;
    //  Is A Wrong Format Char Pointer Pointe To A Address Of Integer Variable  The Pointer Just A Have A One Bytes From 4 Bytes Of Integer So Address Will Be Wronged

    return 0;
}