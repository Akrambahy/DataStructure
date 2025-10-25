#include <iostream>

using namespace std;

void ReFunction(int Number) // Example Recursion Function
{
    if (Number < 1)
        return; // base case
    else
        cout << "Round : " << Number << endl;
    ReFunction(Number - 1); // Sub Problem
}

int FactorialWithRecursion(int Number)
{

    if (Number == 0 || Number == 1)
        return 1; // base case
    else
    {
        return Number * FactorialWithRecursion(Number - 1);
        /*5 * FactorialWithRecursion(4) =     24  =120
         4 * FactorialWithRecursion(3) =    4*6 =24
          3 * FactorialWithRecursion(2) =   3*2 =6
           2 * FactorialWithRecursion(1) =  2*1 =1
             1  */
    }
}

int Fib(int Number)
{
    if (Number == 0 || Number == 1)
        return Number; // base case
    else
    {
        return Fib(Number - 1) + Fib(Number - 2);
        /*
        Fib(5)+Fib(4)      5
         Fib(3)+Fib(2)     3
          Fib(2)+Fib(1)   2
           Fib(1)+Fib(0) 1
              1

        */
    }
}

int main()
{
    ReFunction(5); // Output Is ReFunction(5) : ReFunction(4) : ReFunction (3) : ReFunction(2) : ReFunction(1)

    cout << FactorialWithRecursion(5) << endl;
    cout << Fib(5);
}