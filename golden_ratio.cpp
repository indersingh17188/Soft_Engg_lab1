#include <iostream>
#include<math.h>
using namespace std;

//Declaration of a global variable phi, which can be called from anywhere in this program. It will used in excercise 4.2.
double const phi= (1.0+sqrt(5.0))/2.0;

double Fibonacci(int n)
{
  double result = n;
  if (n > 1)
    result = Fibonacci(n - 1) + Fibonacci(n - 2);

  return result;
}

double f_ratio(int n)
{
  return Fibonacci(n + 1) / Fibonacci(n);
}

int main ()
{
    cout << "Excercise : 4.2 Approximation of the golden ratio at a variance of 10^-9 : " << endl << "\n";

    int n = 0; double Ratio = 0;

    do
    {
        n += 1;
        Ratio = f_ratio(n);
    }
    while(abs(Ratio - phi) > pow(10, -9)); //

    cout<< "Sequence n =  " << n << " and the ratio = "<< Ratio << endl;
    return (0);
}

