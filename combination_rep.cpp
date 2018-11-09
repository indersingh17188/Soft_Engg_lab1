#include <iostream>
using namespace std;

long int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

long int combination_rep (int n,int k)
{
    long int j=1;
    for (int i=(n+k-1); i>(n-1) ; i--)
    {
        j=i*j;  //To calculate multiplication from (n+k-1) till (n-2)
    }
    long int comb = j/factorial(k);

    cout << "The chances of winning a  "<< k << " dice combination game is 1 out of " << comb << endl << "\n";
return 1;
}

int main ()
{
    //Excercise 3.3 starts here ----------------------------

    cout << "Excercise : 3.3 Number of combinations with repetitions" << endl << "\n";
    combination_rep (6,5);
    return (0);
}

