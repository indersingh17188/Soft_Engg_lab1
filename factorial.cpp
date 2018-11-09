#include <iostream>
using namespace std;

long int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    cout << "Excercise : 3 Combination --- 3.1 Factorial" << endl << "\n";

    int i;
    do
    {
        cout << "Enter a positive integer: "; cin >> i;
    } while (i<0);

    cout << "Factorial of " << i << " = " << factorial(i) << endl <<"\n";
return (0);
}
