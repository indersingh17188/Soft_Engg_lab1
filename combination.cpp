#include <iostream>
using namespace std;

long int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

long int combination (int n,int k)
{
    long int j=1;

    //I do not have to calculate the entire factorial of n, just multiplication of n by itself till it reaches (n-k-1)
    for (int i=n; i>(n-k) ; i--)
    {
        //To calculate multiplication from n till (n-k-1)
        j=i*j;
    }

    long int comb = j/factorial(k);

    cout << "The possible no of combinations that we have can have for "<< k <<
            " numbers out of total different " << n << " numbers are : "<< comb << endl << "\n";
return 1;
}

int main ()
{
    cout << "Excercise : 3.2 Number of combinations from a set" <<endl << "\n";
    combination(49,6);
    return (0);
}
