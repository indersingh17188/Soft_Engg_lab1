#include <iostream>
using namespace std;

double fibonacci (int n)
{
     int n1=0, n2=1, n3;

for(int i=0;i<n;i++)
 {
    if (i<=1)     n3=i;
    else
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
  cout << n3 <<" " ;
 }
return 1;
}

int main ()
{
    cout << "Excercise : 4.1 List of Fibonacci " << endl << "\n";

    int number ;
    cout << "Enter the number of terms of Fibonacci series you want : " << endl;  cin >> number;
    cout << "First " << number << " terms of Fibonacci series are :- " << endl;
    fibonacci(number);
    return (0);
}

