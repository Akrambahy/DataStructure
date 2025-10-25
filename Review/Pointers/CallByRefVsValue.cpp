#include <iostream>

using namespace std;

void FunByValue(int Number) // Number Is Local Variable For FunByValue Function
{
    Number++;
    cout << "Value of FunByValue Number : " << Number << endl;
    cout << "Address of FunByValue Number : " << &Number << endl;
}

void FunByRef(int &Number) // Number Is Value of Number Stored In Memory With Address Of Number Called
{
    Number++;
    cout << "Value of FunByRef Number : " << Number << endl;
    cout << "Address of FunByRef Number : " << &Number << endl;
}

int main()
{

    int Number = 5; // Number Is Local Variable For Main Function

    FunByValue(Number); // Number Of Function Well Be Increase Just 

    cout << "Value Of Main Number : " << Number << endl; // Output 5
    cout << "Address Of Main Number : " << &Number << endl; // Output Not Equal Address Of FunByValue

    FunByRef(Number);//Number Of Function And Local Number Of Address Well Be Increase  

    cout << "Value Of Main Number : " << Number << endl; // Output 6
    cout << "Address Of Main Number : " << &Number << endl; //Output Equal Address Of FunByRef


    int & ReNumber=Number;// ReNumber Is A Number put have a New Name any Change in Number Be in ReNumber An viers is Right
    
    cout<<Number<<endl; //Output 6
    cout<<ReNumber<<endl; // Output 6

    ReNumber++; // ReNumber Will Be 7 And Number Will Be 7
    cout<<Number<<endl; // Output 7
    cout<<ReNumber<<endl;  // Output 7
 
    Number++; // Number Will Be 8 And ReNumber Will Be 8
    cout<<Number<<endl; // Output 8
    cout<<ReNumber<<endl; // Output 8


    return 0;
}