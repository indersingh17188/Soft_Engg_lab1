#include <iostream>
using namespace std;

long int permutation(int n, int k)
{
    long int j=1;

    for (int i=n; i>(n-k) ; i--)
    {
        j=i*j; //To calculate multiplication from n till (n-k-1)
    }
    cout << "The number of permutation if you choose "<< k <<
            " cards/things out of a set of  " << n << " cards/things will be : "<< j << endl << "\n";
  return 1;
}

int main ()
{
    cout << "Excercise : 3.4 Permutations" << endl << "\n";
    permutation(54,5);
    return (0);
}

